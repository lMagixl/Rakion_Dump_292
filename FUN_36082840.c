
void __cdecl FUN_36082840(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  CDisableAsyncProgress local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211f7c;
  local_c = ExceptionList;
  iVar4 = *(int *)(_pGfx + 0xa38);
  ExceptionList = &local_c;
  CDisableAsyncProgress::CDisableAsyncProgress(local_10);
  iVar2 = param_1 * 0xd4 + DAT_362c4714;
  local_4 = 0;
  if (iVar4 == 0) {
    puVar3 = (undefined4 *)(iVar2 + 0x60);
    iVar4 = 0xc;
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        FreeMemory((void *)*puVar3);
        *puVar3 = 0;
        puVar3[-0xc] = 0;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else if (iVar4 == 1) {
    FUN_36073170();
    puVar3 = (undefined4 *)(iVar2 + 0x30);
    iVar4 = 0xc;
    do {
      if (puVar3[0xc] != 0) {
        do {
          iVar1 = (**(code **)(*(int *)puVar3[0xc] + 8))((int *)puVar3[0xc]);
        } while (0 < iVar1);
        puVar3[0xc] = 0;
        if ((void *)*puVar3 != (void *)0x0) {
          FreeMemory((void *)*puVar3);
          *puVar3 = 0;
        }
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(iVar2 + 200) = 0;
  local_4 = 0xffffffff;
  CDisableAsyncProgress::~CDisableAsyncProgress(local_10);
  ExceptionList = local_c;
  return;
}

