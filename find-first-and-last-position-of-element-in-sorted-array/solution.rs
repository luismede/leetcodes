impl Solution {
    pub fn search_range(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut start: i32 = -1;
        let mut end: i32 = -1;

        for i in 0..nums.len() {
            if nums[i] == target {
                start = i as i32;
                break;
            }
        }

        for i in ( 0..nums.len() ).rev() {
            if nums[i] == target {
                end = i as i32;
                break;
            }
        }

        vec![start, end]
    }
}
