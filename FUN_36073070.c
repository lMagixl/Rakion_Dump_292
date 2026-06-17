
int __fastcall FUN_36073070(int param_1)

{
  int in_EAX;
  
  if (param_1 < 0x33) {
    if (param_1 != 0x32) {
      switch(param_1) {
      case 0x15:
      case 0x19:
        goto switchD_3607307f_caseD_15;
      case 0x16:
        return (uint)(in_EAX != 0) * 2 + 0x15;
      case 0x17:
        return (in_EAX != 0) + 0x18;
      case 0x18:
        return (uint)(in_EAX != 0) * 2 + 0x17;
      default:
        return 0;
      case 0x1c:
        return (-(uint)(in_EAX != 0) & 0xffffffe2) + 0x33;
      }
    }
    return (-(uint)(in_EAX != 0) & 0xffffffe3) + 0x33;
  }
  if (param_1 < 0x33545845) {
    if (param_1 != 0x33545844) {
      if (param_1 == 0x33) {
        return 0x15;
      }
      if (param_1 != 0x31545844) {
        return 0;
      }
      return 0x19;
    }
  }
  else if (param_1 != 0x35545844) {
    return 0;
  }
switchD_3607307f_caseD_15:
  return 0x1a;
}

