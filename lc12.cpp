class Solution {
public:
    string intToRoman(int num) {
        string roman ="";
        while (num > 0) {
            if (num == 4) {
                roman = roman + "IV";
                break;
            } else if (num == 9) {
                roman = roman + "IX";
                break;
            } else if (num >= 1000) {
                num -= 1000;
                roman = roman + "M";
            } else if (num >= 900) {
                num -= 900;
                roman = roman + "CM";
            } else if (num >= 500) {
                num -= 500;
                roman = roman + "D";
            } else if (num >= 400) {
                num -= 400;
                roman = roman + "CD";
            } else if (num >= 100) {
                num -= 100;
                roman = roman + "C";
            } else if (num >= 90) {
                num -= 90;
                roman = roman + "XC";
            } else if (num >= 50) {
                num -= 50;
                roman = roman + "L";
            } else if (num >= 40) {
                num -= 40;
                roman = roman + "XL";
            } else if (num >= 10) {
                num -= 10;
                roman = roman + "X";
            } else if (num >= 5) {
                num -= 5;
                roman = roman + "V";
            } else if (num >= 1) {
                num -= 1;
                roman = roman + "I";
            }
        }
        return roman;
    }
};