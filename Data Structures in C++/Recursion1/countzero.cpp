int countZeros(int number) {
    if (number < 10) {
        return (number == 0) ? 1 : 0;
    }

    int lastDigit = number % 10;
    int remainingNumber = number / 10;

    if (lastDigit == 0) {
        return 1 + countZeros(remainingNumber);
    } else {
        return countZeros(remainingNumber);
    }
}