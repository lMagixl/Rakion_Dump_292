
/* public: long __thiscall CTString::VPrintF(char const *,char *) */

long __thiscall CTString::VPrintF(CTString *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  pvVar3 = ThreadLocalStoragePointer;
                    /* 0x244d0  3935  ?VPrintF@CTString@@QAEJPBDPAD@Z */
  iVar5 = _tls_index;
  iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if (*(int *)(iVar1 + 0x20) == 0) {
    *(undefined4 *)(iVar1 + 0x20) = 0x100;
    pvVar4 = AllocMemory(0x100);
    *(void **)(iVar1 + 0x24) = pvVar4;
  }
  iVar5 = *(int *)((int)pvVar3 + iVar5 * 4);
  iVar5 = _vsnprintf(*(char **)(iVar5 + 0x24),*(size_t *)(iVar5 + 0x20),param_1,param_2);
  if (iVar5 == -1) {
    iVar2 = *(int *)((int)pvVar3 + _tls_index * 4);
    do {
      iVar5 = *(int *)(iVar2 + 0x20) + 0x100;
      *(int *)(iVar2 + 0x20) = iVar5;
      GrowMemory((void **)(iVar2 + 0x24),iVar5);
      iVar5 = _vsnprintf(*(char **)(iVar1 + 0x24),*(size_t *)(iVar1 + 0x20),param_1,param_2);
    } while (iVar5 == -1);
  }
  pcVar6 = StringDuplicate(*(char **)(iVar1 + 0x24));
  StringFree(*(char **)this);
  *(char **)this = pcVar6;
  return iVar5;
}

