// https://leetcode.com/problems/fizz-buzz/
impl Solution {
    pub fn fizz_buzz(n: i32) -> Vec<String> {
        let mut arr = Vec::with_capacity(n as usize);
        for i in 1..=n {
            if i % 15 == 0 {
                arr.push("FizzBuzz".to_string());
            } else if i % 3 == 0 {
                arr.push("Fizz".to_string());
            } else if i % 5 == 0 {
                arr.push("Buzz".to_string());
            } else {
                arr.push(i.to_string());
            }
        }
        return arr;
    }
}
