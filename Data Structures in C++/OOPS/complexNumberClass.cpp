class ComplexNumbers {
    int real;
    int imaginary;
public:
    ComplexNumbers(int r, int i) {
        real = r;
        imaginary = i;
    }
    void plus(ComplexNumbers c2) {
        real += c2.real;
        imaginary += c2.imaginary;
    }
    void print() {
        cout << real << " + i" << imaginary << endl;
    }
    void multiply(ComplexNumbers c2) {
        int new_real = (real * c2.real) - (imaginary * c2.imaginary);
        int new_imaginary = (real * c2.imaginary) + (imaginary * c2.real);
        real = new_real;
        imaginary = new_imaginary;
    }
};