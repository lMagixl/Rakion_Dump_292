
void __fastcall FUN_3611c0e0(void *param_1)

{
  CListHead *pCVar1;
  undefined4 *puVar2;
  CAnyProjection3D *pCVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_361158d0((int)param_1);
  if ((*(int *)((int)param_1 + 0xd40) == 0) && (DAT_362fcbc0 != 0)) {
    FUN_36114360(2);
    if (*(int *)((int)param_1 + 0x6c0) == 0) {
      FUN_36071150(*(CDrawPort **)((int)param_1 + 8),*(uint *)((int)param_1 + 0xf84));
    }
    else {
      (**(code **)**(undefined4 **)((int)param_1 + 0xd20))();
      FUN_36070e00(*(CDrawPort **)((int)param_1 + 8),*(undefined4 *)((int)param_1 + 0x14),
                   (CAnyProjection3D *)((int)param_1 + 0x6c8),*(undefined4 *)((int)param_1 + 0xd60),
                   0);
    }
  }
  if (*(int *)((int)param_1 + 0x6c0) != 0) {
    FUN_36114360(3);
    FUN_3611a150(param_1,1);
    FUN_36114360(2);
  }
  if (*(int *)((int)param_1 + 0xd40) == 0) {
    if (*(int *)((int)param_1 + 0x6c0) == 0) goto LAB_3611c1db;
    if (DAT_362fcbc0 != 0) {
      uVar4 = *(undefined4 *)((int)param_1 + 0xd60);
      iVar5 = 1;
      pCVar3 = (CAnyProjection3D *)((int)param_1 + 0x6c8);
      puVar2 = FUN_3611a680(*(int **)((int)param_1 + 0x18));
      FUN_36070e00(*(CDrawPort **)((int)param_1 + 8),puVar2,pCVar3,uVar4,iVar5);
    }
  }
  if (*(int *)((int)param_1 + 0x6c0) != 0) {
    FUN_36114360(5);
    FUN_36117fb0(param_1,1);
    FUN_36114360(2);
  }
LAB_3611c1db:
  if (*(int *)((int)param_1 + 0xd40) == 0) {
    if (DAT_362fcbc0 != 0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x694))();
      FUN_36070e00(*(CDrawPort **)((int)param_1 + 8),*(undefined4 *)((int)param_1 + 0xc),
                   (CAnyProjection3D *)((int)param_1 + 0x3c),*(undefined4 *)((int)param_1 + 0xd60),0
                  );
    }
    if (*(int *)((int)param_1 + 0xd40) == 0) {
      if (DAT_362fcbc0 != 0) {
        FUN_361149d0((int)param_1);
      }
      if ((*(int *)((int)param_1 + 0xd40) == 0) &&
         ((((DAT_362fcbb8 != 0 || (DAT_362fcbb0 != 0)) || (DAT_362fcbf8 == 4)) ||
          (DAT_362fcb90 != 0)))) {
        CDrawPort::SetOrtho(*(CDrawPort **)((int)param_1 + 8));
        FUN_36116de0(param_1);
        FUN_36114a20((int)param_1);
      }
    }
  }
  FUN_36114360(3);
  FUN_3611a150(param_1,0);
  FUN_36114360(5);
  FUN_36117fb0(param_1,0);
  FUN_36114360(2);
  if (*(int *)((int)param_1 + 0xd40) == 0) {
    if (DAT_362fcbc0 != 0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x694))();
      uVar4 = *(undefined4 *)((int)param_1 + 0xd60);
      iVar5 = 1;
      pCVar3 = (CAnyProjection3D *)((int)param_1 + 0x3c);
      puVar2 = FUN_3611a680(*(int **)((int)param_1 + 0x10));
      FUN_36070e00(*(CDrawPort **)((int)param_1 + 8),puVar2,pCVar3,uVar4,iVar5);
    }
    if (*(int *)((int)param_1 + 0xd40) == 0) {
      FUN_36114360(6);
      FUN_36115ab0((int)param_1);
      FUN_36114360(2);
      if (*(int *)((int)param_1 + 0xd40) == 0) {
        if (DAT_362fcb84 != 0) {
          FUN_36114e50(param_1);
        }
        if ((*(int *)((int)param_1 + 0xd40) == 0) && (DAT_362fcb88 != 0)) {
          FUN_36117180((int)param_1);
        }
      }
    }
  }
  pCVar1 = (CListHead *)((int)param_1 + 0xdb0);
  iVar5 = CListHead::IsEmpty(pCVar1);
  if ((iVar5 == 0) && (*(int *)pCVar1 != *(int *)((int)param_1 + 0xdb8))) {
    iVar5 = FUN_3611f890((int)pCVar1);
    FUN_361220b0((undefined4 *)pCVar1);
    FUN_36122060(pCVar1,iVar5);
  }
  *(undefined4 *)((int)param_1 + 0xdc4) = 0;
  pCVar1 = (CListHead *)((int)param_1 + 0xd94);
  *(undefined4 *)((int)param_1 + 0xdd4) = 0;
  iVar5 = CListHead::IsEmpty(pCVar1);
  if ((iVar5 == 0) && (*(int *)pCVar1 != *(int *)((int)param_1 + 0xd9c))) {
    iVar5 = FUN_3611f840((int)pCVar1);
    FUN_36121ff0((undefined4 *)pCVar1);
    FUN_36122b30(pCVar1,iVar5);
  }
  *(undefined4 *)((int)param_1 + 0xda8) = 0;
  *(undefined4 *)((int)param_1 + 0xe10) = 0;
  return;
}

