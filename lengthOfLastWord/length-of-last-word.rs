// https://leetcode.com/problems/length-of-last-word
impl Solution {
    pub fn length_of_last_word(s: String) -> i32 {
        let mut j: i32 = 0;
        for c in s.chars().rev() {
            if c != ' ' {
                j += 1;
            } else {
                if j > 0 {
                    break;
                }
            }
        }
        j
    }
}
