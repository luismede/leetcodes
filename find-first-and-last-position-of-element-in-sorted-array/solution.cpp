class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int posicao_inicio = -1;
        int posicao_fim = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target) {
                posicao_inicio = i;
                break;
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == target) {
                posicao_fim = i;
                break;
            }
        }

        return {posicao_inicio, posicao_fim};
    }
};
