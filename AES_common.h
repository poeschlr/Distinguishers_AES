#ifndef __AES_H__
#define __AES_H__

#define N_Round 10

typedef unsigned char word8;

extern const word8 sBox[];
extern const word8 inv_s[];

word8 multiplicationX(word8 byte);
word8 multiplicationXN(word8 byte, int n);

void encryption(const word8 initialMessage[][4], const word8 initialKey[][4], word8 ciphertext[4][4]);
void decryption(const word8 initialMessage[][4], const word8 initialKey[][4], word8 plaintext[4][4]);
void printtt(const word8 p[4][4]);

#endif // __AES_H__
