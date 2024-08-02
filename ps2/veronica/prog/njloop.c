void main();








void main() /* Matching - 100% */ { // Line 10, Address: 0x12b0a0
  njUserInit(); // Line 11, Address: 0x12b0a8

loop_1:
  if (njUserMain() >= 0) { // Line 14, Address: 0x12b0b0
    njWaitVSync(); // Line 15, Address: 0x12b0c0
    goto loop_1; // Line 16, Address: 0x12b0c8
  }
  njUserExit(); // Line 18, Address: 0x12b0d0
} // Line 19, Address: 0x12b0d8
