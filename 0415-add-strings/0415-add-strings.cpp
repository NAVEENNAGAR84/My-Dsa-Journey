class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        int i = 0;
        int carry = 0;
        string ans = "";
        while (i < n1 || i < n2 || carry)

        {
            int sum = carry;
            if (i < n1) {
                sum += num1[n1 - i - 1] - '0';
            }
            if (i < n2) {
                sum += num2[n2 - i - 1] - '0';
            }
            int rem = sum % 10;
            carry = sum / 10;
            ans = char(rem + '0') + ans;
            i++;
        }
        return ans;
    }
};