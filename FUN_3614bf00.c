
uint __cdecl FUN_3614bf00(int param_1)

{
  bool bVar1;
  int *in_EAX;
  size_t sVar2;
  uint uVar3;
  size_t _Count;
  
  bVar1 = false;
  if ((in_EAX == (int *)0x0) || ((char)in_EAX[0x17] != 'w')) {
    return 0xfffffffe;
  }
  in_EAX[1] = 0;
  do {
    _Count = 0x4000 - in_EAX[4];
    if (_Count != 0) {
      sVar2 = fwrite((void *)in_EAX[0x12],1,_Count,(FILE *)in_EAX[0x10]);
      if (sVar2 != _Count) {
        in_EAX[0xe] = -1;
        return 0xffffffff;
      }
      in_EAX[3] = in_EAX[0x12];
      in_EAX[4] = 0x4000;
    }
    if (bVar1) break;
    in_EAX[0x1a] = in_EAX[0x1a] + in_EAX[4];
    uVar3 = FUN_3614a2a0(in_EAX,param_1);
    in_EAX[0xe] = uVar3;
    in_EAX[0x1a] = in_EAX[0x1a] - in_EAX[4];
    if ((_Count == 0) && (uVar3 == 0xfffffffb)) {
      in_EAX[0xe] = 0;
    }
    if ((in_EAX[4] == 0) && (in_EAX[0xe] != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  } while ((in_EAX[0xe] == 0) || (in_EAX[0xe] == 1));
  return -(uint)(in_EAX[0xe] != 1) & in_EAX[0xe];
}

