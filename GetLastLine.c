
/* public: class CTString __thiscall CConsole::GetLastLine(long) */

long __thiscall CConsole::GetLastLine(CConsole *this,long param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000008;
  
                    /* 0x21e80  1933  ?GetLastLine@CConsole@@QAE?AVCTString@@J@Z */
  if (this == (CConsole *)0x0) {
    pcVar1 = StringDuplicate(&DAT_36224013);
    *(char **)param_1 = pcVar1;
    return param_1;
  }
  if (*(int *)(this + 0x24) <= in_stack_00000008) {
    pcVar1 = StringDuplicate(&DAT_36224014);
    *(char **)param_1 = pcVar1;
    return param_1;
  }
  uVar3 = *(uint *)(this + 0x18);
  puVar4 = (undefined4 *)
           (((*(int *)(this + 0x1c) - in_stack_00000008) + -1) * (uVar3 + 1) + *(int *)(this + 8));
  puVar5 = *(undefined4 **)(this + 0x14);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(undefined1 *)(*(int *)(this + 0x18) + *(int *)(this + 0x14)) = 0;
  pcVar1 = StringDuplicate(*(char **)(this + 0x14));
  *(char **)param_1 = pcVar1;
  return param_1;
}

