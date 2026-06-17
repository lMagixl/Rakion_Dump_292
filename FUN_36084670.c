
void FUN_36084670(void)

{
  int in_EAX;
  char *pcVar1;
  undefined4 *unaff_ESI;
  
  if (in_EAX == 0) {
    pcVar1 = StringDuplicate(s_optimal_3622b1f8);
    *unaff_ESI = pcVar1;
    return;
  }
  if (in_EAX == 1) {
    pcVar1 = StringDuplicate(s_16_bit_3622b200);
    *unaff_ESI = pcVar1;
    return;
  }
  if (in_EAX == 2) {
    pcVar1 = StringDuplicate(s_32_bit_3622b208);
    *unaff_ESI = pcVar1;
    return;
  }
  if (in_EAX == 3) {
    pcVar1 = StringDuplicate(s_compressed_3622b210);
    *unaff_ESI = pcVar1;
    return;
  }
  pcVar1 = StringDuplicate(&DAT_3622b21c);
  *unaff_ESI = pcVar1;
  return;
}

