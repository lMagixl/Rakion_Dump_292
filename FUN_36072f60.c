
undefined4 FUN_36072f60(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 0x46:
  case 0x50:
    return 0x10;
  case 0x47:
    return 0x20;
  default:
    return 0;
  case 0x49:
    return 0x8000000f;
  case 0x4b:
  case 0x4f:
    return 0x80000018;
  case 0x4d:
    return 0x18;
  }
}

