#include <bits/stdc++.h>
//#include <cstdint>
//#include <cstddef>
using namespace std;

void primitiveDataTypes () {

    /*
    The modern portable solution: <cstdint>
    Use fixed-width integer types for guaranteed sizes:

    C++ type	Size (bits)	Description
    int8_t	    8	    exactly 8-bit signed int
    uint8_t	    8	    exactly 8-bit unsigned int
    int16_t	    16	    exactly 16-bit signed int
    uint16_t	16	    exactly 16-bit unsigned int
    int32_t	    32	    exactly 32-bit signed int
    uint32_t	32	    exactly 32-bit unsigned int
    int64_t	    64	    exactly 64-bit signed int
    uint64_t	64	    exactly 64-bit unsigned int

    These come from <cstdint> (C++) or <stdint.h> (C).
    
    long == long int
    long long == long long int
    long is not equal to long long


    Why : 
    Because of the different size of long or other types 
    in case of different machine / architectures like windows / macos/ linux
    It depends on your operating system and compiler ABI (Application Binary Interface).
    On 64-bit Linux and macOS, long is usually 8 bytes.
    On 64-bit Windows, long is still 4 bytes!
    This is because Windows uses the LLP64 model, while Linux/macOS use LP64.


    Quick usage summary
    When to use	Use	Example
    For general math	            int, long, long long	Portable but size varies
    For file sizes, memory sizes	size_t	                malloc, sizeof usage
    For fixed-size portable data	int32_t, uint64_t	    Network protocols, files


    short ≤ int ≤ long ≤ long long
    */

    cout<<"************************byte (uint8_t in C++)********************\n";
    uint8_t x;
    x = 11;
    /*
    Printing x directly will not print 11, it will print the 11th ASCII character.
    In reality, uint8_t is typedef for unsigned char, so in a way
    writing uint8_t or unsigned char dows not matter both are same
    So, unsigned char x = 11; x will get the ASCII value 
    To print 11 , we need to cast it to int
    cout<<static_cast<int>(x)<<"\n";
    */
    cout<<"uint8_t (unit8_t x) : "<<x<<"\n";
    cout<<"uint8_t (unit8_t static_cast<int>(x)) : "<<static_cast<int>(x)<<"\n";
    cout<<"Address of x : "<<&x<<"\n";
    cout<<"Size of x in Bytes, sizeof(x) : "<<sizeof(x)<<"\n";
    cout<<'\n';
    cout<<"************************short********************\n";
    
    short a;
    a = 10;
    cout<<"Short (short a) : "<<a<<"\n";
    cout<<"Address of a : "<<&a<<"\n";
    cout<<"Size of a in Bytes, sizeof(a) : "<<sizeof(a)<<"\n";
    cout<<'\n';

    cout<<"************************int********************\n";
    int b {01}; //Initialized with value 1
    cout<<"Integer (int b) : "<<b<<"\n";
    cout<<"Address of b : "<<&b<<"\n";
    cout<<"Size of b in Bytes, sizeof(b) : "<<sizeof(b)<<"\n";
    cout<<'\n';

    cout<<"************************long (on mac = 8 bytes)********************\n";
    long c {23}; //Initialized with value 1
    cout<<"long (long c) : "<<c<<"\n";
    cout<<"Address of c : "<<&c<<"\n";
    cout<<"Size of c in Bytes, sizeof(c) : "<<sizeof(c)<<"\n";
    cout<<'\n';

    cout<<"************************long long********************\n";
    long long d {334}; //Initialized with value 1
    cout<<"long long (long long d) : "<<c<<"\n";
    cout<<"Address of d : "<<&d<<"\n";
    cout<<"Size of d in Bytes, sizeof(d) : "<<sizeof(d)<<"\n";
    cout<<'\n';

    cout<<"**********************int16_t, int32_t, int64_t (cstdint), size_t (cstddef)**********************\n";

    /*
    What about size_t?
    size_t is an unsigned integer type large enough to represent the size of any object in memory.
    Its actual size depends on your platform’s pointer size:
    32-bit system → 4 bytes
    64-bit system → 8 bytes
    
    So, sizeof(size_t) == sizeof(void*)
    */

    int16_t i16 = 42;
    int32_t i32 = 42;
    int64_t i64 = 42;

    size_t szs = sizeof(short); // 8 bytes , because we are on 64-bit system
    size_t szi = sizeof(int); // 8 bytes , because we are on 64-bit system
    size_t szl = sizeof(long); // 8 bytes , because we are on 64-bit system
    size_t szll = sizeof(long long); // 8 bytes , because we are on 64-bit system

    cout << "int16_t: size of int16_t " << sizeof(i16) << '\n';
    cout << "int32_t: size of int32_t " << sizeof(i32) << '\n';
    cout << "int64_t: size of int64_t " << sizeof(i64) << '\n';
    cout << "size_t: size of size_t(short) " << sizeof(szs) << '\n';
    cout << "size_t: size of size_t(int) " << sizeof(szi) << '\n';
    cout << "size_t: size of size_t(long) " << sizeof(szl) << '\n';
    cout << "size_t: size of size_t(long long) " << sizeof(szll) << '\n';
    cout<<'\n';
}

/******************************Hello World*******************************/
void helloWorld () {
    cout<<"Hello World!!!\n";
}

/******************************Main*******************************/
int main () {

    //Print Hello World
    helloWorld();
    primitiveDataTypes();

    return 0;
}