int MySqrt(int num){
  register unsigned int temp, x;
  if (num < 0){
    num = -num;
  }
  for (temp = 0, x = 1u << (sizeof(unsigned int) * 4 - 1); x; x >>= 1) {
    if ((temp | x) * (temp | x) <= num)
      temp |= x;
  }
  return temp;
}