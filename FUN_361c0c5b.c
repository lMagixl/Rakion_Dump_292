
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_361c0c5b(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  UINT aUStack_28 [2];
  DWORD DStack_20;
  int aiStack_1c [2];
  int aiStack_14 [2];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    aiStack_14[1] = 0x361c0c7a;
    iVar2 = -(param_3 + 3U & 0xfffffffc);
    pcVar4 = &stack0xfffffff4 + iVar2;
    *(int *)((int)aiStack_14 + iVar2 + 4) = param_3;
    *(undefined1 **)((int)aiStack_14 + iVar2) = &stack0xfffffff4 + iVar2;
    *(undefined4 *)((int)aiStack_1c + iVar2 + 4) = param_1;
    *(undefined4 *)((int)aiStack_1c + iVar2) = 0x361c0c86;
    iVar3 = FUN_361c09ec(*(char **)((int)aiStack_1c + iVar2 + 4),*(char **)((int)aiStack_14 + iVar2)
                         ,*(size_t *)((int)aiStack_14 + iVar2 + 4));
    if (iVar3 < 0) {
      return iVar3;
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(int *)((int)aiStack_14 + iVar2 + 4) = param_3;
    *(int *)((int)aiStack_14 + iVar2) = param_2;
    *(int *)((int)aiStack_1c + iVar2 + 4) = (int)pcVar4 - (int)(&stack0xfffffff5 + iVar2);
    *(undefined1 **)((int)aiStack_1c + iVar2) = &stack0xfffffff4 + iVar2;
    *(undefined4 *)((int)&DStack_20 + iVar2) = 0;
    *(undefined4 *)((int)aUStack_28 + iVar2 + 4) = 0;
    *(undefined4 *)((int)aUStack_28 + iVar2) = 0x361c0ca8;
    MultiByteToWideChar(*(UINT *)((int)aUStack_28 + iVar2 + 4),*(DWORD *)((int)&DStack_20 + iVar2),
                        *(LPCSTR *)((int)aiStack_1c + iVar2),*(int *)((int)aiStack_1c + iVar2 + 4),
                        *(LPWSTR *)((int)aiStack_14 + iVar2),*(int *)((int)aiStack_14 + iVar2 + 4));
  }
  return 0;
}

