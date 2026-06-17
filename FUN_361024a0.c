
int __thiscall FUN_361024a0(void *this,float param_1,float param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)((int)this + 0x1c3c);
  iVar4 = FUN_36100db0(this,param_1,&param_1);
  if (iVar4 == 2) {
    return 0;
  }
  iVar4 = FUN_36100cb0(this,param_1,(int *)&param_1);
  fVar6 = param_1;
  if (iVar4 != 0) {
    fVar6 = *(float *)((int)this + 0x1c40);
  }
  iVar4 = FUN_36100cb0(this,param_2,(int *)&param_1);
  if (iVar4 == 0) {
    pcVar1 = (char *)((int)this + ((int)fVar6 * 3 + 9) * 4);
    fVar5 = fVar6;
    if (*pcVar1 != '\0') {
      *pcVar1 = *pcVar1 + -1;
    }
    while (fVar5 != param_1) {
      fVar5 = (float)(((int)fVar5 + 1) % 600);
      pcVar2 = (char *)((int)this + ((int)fVar5 * 3 + 9) * 4);
      cVar3 = *pcVar2;
      if (cVar3 != '\0') {
        *pcVar2 = cVar3 + -1;
      }
    }
    if ((*pcVar1 == '\0') && (uVar7 != 0)) {
      do {
        if (uVar7 == 0) break;
        if (0 < (int)uVar7) {
          *(undefined4 *)((int)this + (int)fVar6 * 0xc + 0x1c) = 0xbf800000;
          *(undefined4 *)((int)this + (int)fVar6 * 0xc + 0x20) = 0xffffffff;
          *(undefined2 *)((int)this + (int)fVar6 * 0xc + 0x26) = 0;
          uVar7 = uVar7 - 1;
          fVar6 = (float)(((int)fVar6 + 1) % 600);
        }
      } while (*(char *)((int)this + ((int)fVar6 * 3 + 9) * 4) == '\0');
      FUN_36102400(this,*(float *)((int)this + (int)fVar6 * 0xc + 0x1c));
    }
    iVar4 = 0;
  }
  return iVar4;
}

