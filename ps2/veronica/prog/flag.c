void bhStFlg(unsigned int* flg, unsigned int bit);
void bhCrFlg(unsigned int* flg, unsigned int bit);
int bhCkFlg(unsigned int* flg, unsigned int bit);
































void bhStFlg(unsigned int* flg, unsigned int bit) {
    flg[bit / 32] |= 0x80000000 >> (bit & 31); // Line 37, Address: 0x280e40
} // Line 38, Address: 0x280e60





void bhCrFlg(unsigned int* flg, unsigned int bit) {
  flg[bit / 32] &= ~(0x80000000 >> (bit & 31)); // Line 45, Address: 0x280e70
} // Line 46, Address: 0x280e94





int bhCkFlg(unsigned int* flg, unsigned int bit) {
  return flg[bit / 32] & 0x80000000 >> (bit & 31); // Line 53, Address: 0x280ea0
} // Line 54, Address: 0x280ebc
