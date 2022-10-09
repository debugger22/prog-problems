//! Prints numbers in spiral with the maxima in the centre.

enum MoveState {
    Right,
    Down,
    Left,
    Up,
}

fn main() {
    const SIZE: usize = 9;

    let mut row: usize = 0;
    let mut col: usize = 0;

    let mut boundary: usize = SIZE - 1;
    let mut size_left: usize = SIZE - 1;
    let mut flag: i8 = 1;

    let mut matrix: [[usize; SIZE]; SIZE] = [[0; SIZE]; SIZE];

    let mut m_state = MoveState::Right;

    for i in 1..=SIZE * SIZE {
        matrix[row][col] = i;

        match m_state {
            MoveState::Right => col += 1,
            MoveState::Left => col -= 1,
            MoveState::Up => row -= 1,
            MoveState::Down => row += 1,
        }

        if i == boundary {
            boundary += size_left;

            if flag != 2 {
                flag = 2;
            } else {
                flag = 1;
                size_left -= 1;
            }

            match m_state {
                MoveState::Right => m_state = MoveState::Down,
                MoveState::Down => m_state = MoveState::Left,
                MoveState::Left => m_state = MoveState::Up,
                MoveState::Up => m_state = MoveState::Right,
            }
        }
    }

    // Print the matrix
    row = 0;
    while row < SIZE {
        for col in 0..SIZE {
            let n = matrix[row][col];
            if n < 10 {
                print!("{}\t", n);
            } else {
                print!("{}\t", n);
            }
        }
        row += 1;
        println!("\n");
    }
}
