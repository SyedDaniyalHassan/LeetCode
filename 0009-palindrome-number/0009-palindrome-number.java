class Solution {
    public boolean isPalindrome(int x) {
       if (x < 0) {
            return false; // Negative numbers are not palindromes
        }

        int original = x; // Store the original number
        int reverse = 0;

        // Reverse the number
        while (x != 0) {
            int mod = x % 10; // Get the last digit
            reverse = reverse * 10 + mod; // Build the reversed number
            x = x / 10; // Remove the last digit
        }

        // Check if the reversed number is equal to the original
        return reverse == original;
    }
}