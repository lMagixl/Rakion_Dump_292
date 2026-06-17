
int __fastcall FUN_3614c611(undefined4 param_1,int param_2,uint *param_3)

{
  undefined1 *in_EAX;
  int *piVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puStack00000010;
  int in_stack_00000014;
  
  unaff_EBP[3] = (int)in_EAX;
  unaff_EBP[4] = in_stack_00000014;
  puStack00000010 = in_EAX;
  if ((in_stack_00000014 != 0) && (unaff_EBP[0x1b] != param_2)) {
    *in_EAX = (char)unaff_EBP[0x1b];
    puStack00000010 = in_EAX + 1;
    unaff_EBP[3] = unaff_EBP[3] + 1;
    unaff_EBP[4] = unaff_EBP[4] + -1;
    unaff_EBP[0x1b] = param_2;
    unaff_EBP[0x1a] = unaff_EBP[0x1a] + 1;
    if (unaff_EBP[0x1c] != 0) {
      unaff_EBP[0xe] = 1;
      return 1;
    }
  }
  iVar3 = unaff_EBP[4];
  do {
    if (iVar3 == 0) {
LAB_3614c842:
      uVar4 = FUN_3614a050(unaff_EBP[0x13],param_3,unaff_EBP[3] - (int)param_3);
      unaff_EBP[0x13] = uVar4;
      return in_stack_00000014 - unaff_EBP[4];
    }
    if (unaff_EBP[0x16] != 0) {
      uVar4 = unaff_EBP[1];
      if ((uint)unaff_EBP[4] < (uint)unaff_EBP[1]) {
        uVar4 = unaff_EBP[4];
      }
      if (uVar4 != 0) {
        puVar6 = (undefined4 *)*unaff_EBP;
        puVar7 = (undefined4 *)unaff_EBP[3];
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        puStack00000010 = puStack00000010 + uVar4;
        unaff_EBP[3] = (int)puStack00000010;
        *unaff_EBP = *unaff_EBP + uVar4;
        unaff_EBP[4] = unaff_EBP[4] - uVar4;
        unaff_EBP[1] = unaff_EBP[1] - uVar4;
      }
      if (unaff_EBP[4] != 0) {
        sVar2 = fread(puStack00000010,1,unaff_EBP[4],(FILE *)unaff_EBP[0x10]);
        unaff_EBP[4] = unaff_EBP[4] - sVar2;
      }
      iVar3 = in_stack_00000014 - unaff_EBP[4];
      unaff_EBP[0x19] = unaff_EBP[0x19] + iVar3;
      unaff_EBP[0x1a] = unaff_EBP[0x1a] + iVar3;
      if (iVar3 == 0) {
        unaff_EBP[0xf] = 1;
      }
      return iVar3;
    }
    if ((unaff_EBP[1] == 0) && (unaff_EBP[0xf] == 0)) {
      piVar1 = _errno();
      *piVar1 = 0;
      sVar2 = fread((void *)unaff_EBP[0x11],1,0x4000,(FILE *)unaff_EBP[0x10]);
      unaff_EBP[1] = sVar2;
      if ((sVar2 == 0) && (unaff_EBP[0xf] = 1, (*(byte *)(unaff_EBP[0x10] + 0xc) & 0x20) != 0)) {
        unaff_EBP[0xe] = -1;
        goto LAB_3614c842;
      }
      *unaff_EBP = unaff_EBP[0x11];
    }
    unaff_EBP[0x19] = unaff_EBP[0x19] + unaff_EBP[1];
    unaff_EBP[0x1a] = unaff_EBP[0x1a] + unaff_EBP[4];
    iVar3 = FUN_3614e150(unaff_EBP,0);
    unaff_EBP[0x19] = unaff_EBP[0x19] - unaff_EBP[1];
    unaff_EBP[0xe] = iVar3;
    unaff_EBP[0x1a] = unaff_EBP[0x1a] - unaff_EBP[4];
    if (iVar3 == 1) {
      uVar4 = FUN_3614a050(unaff_EBP[0x13],param_3,unaff_EBP[3] - (int)param_3);
      param_3 = (uint *)unaff_EBP[3];
      unaff_EBP[0x13] = uVar4;
      iVar3 = FUN_3614c0f0();
      if (iVar3 != unaff_EBP[0x13]) {
        unaff_EBP[0xe] = -3;
        goto LAB_3614c842;
      }
      FUN_3614c0f0();
      FUN_3614bad0();
      if (unaff_EBP[0xe] != 0) goto LAB_3614c842;
      FUN_3614ded0((int)unaff_EBP);
      uVar4 = FUN_3614a050(0,(uint *)0x0,0);
      unaff_EBP[0x13] = uVar4;
    }
    if ((unaff_EBP[0xe] != 0) || (unaff_EBP[0xf] != 0)) goto LAB_3614c842;
    iVar3 = unaff_EBP[4];
  } while( true );
}

