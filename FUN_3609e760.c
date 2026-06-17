
void __cdecl FUN_3609e760(int param_1)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  *(undefined2 *)(in_EAX + 4) = 0;
  *(undefined2 *)in_EAX = 1;
  *(undefined2 *)((int)in_EAX + 2) = 2;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x10;
  if (param_1 == 1) {
    in_EAX[1] = 0x2b11;
  }
  else {
    if (param_1 == 2) {
      in_EAX[1] = 0x5622;
      *(undefined2 *)(in_EAX + 3) = 4;
      in_EAX[2] = in_EAX[1] << 2;
      return;
    }
    if (param_1 == 3) {
      in_EAX[1] = 0xac44;
      *(undefined2 *)(in_EAX + 3) = 4;
      in_EAX[2] = in_EAX[1] << 2;
      return;
    }
  }
  *(undefined2 *)(in_EAX + 3) = 4;
  in_EAX[2] = in_EAX[1] << 2;
  return;
}

