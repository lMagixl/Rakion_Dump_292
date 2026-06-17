
/* int __cdecl GetLogicalAddress(void *,char *,unsigned long,unsigned long &,unsigned long &) */

int __cdecl
GetLogicalAddress(void *param_1,char *param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  uint uVar2;
  SIZE_T SVar3;
  DWORD DVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  _MEMORY_BASIC_INFORMATION local_1c;
  
                    /* 0x3b240  1962  ?GetLogicalAddress@@YAHPAXPADKAAK2@Z */
  SVar3 = VirtualQuery(param_1,&local_1c,0x1c);
  if (SVar3 == 0) {
    return 0;
  }
  DVar4 = GetModuleFileNameA(local_1c.AllocationBase,param_2,param_3);
  if (DVar4 == 0) {
    return 0;
  }
  iVar1 = ((HMODULE)((int)local_1c.AllocationBase + 0x3c))->unused;
  uVar7 = (uint)*(ushort *)((int)&((HMODULE)((int)local_1c.AllocationBase + 4))->unused + iVar1 + 2)
  ;
  uVar9 = (int)param_1 - (int)local_1c.AllocationBase;
  uVar8 = 0;
  if (uVar7 != 0) {
    puVar5 = (uint *)((int)&((HMODULE)((int)local_1c.AllocationBase + 0x20))->unused +
                     (uint)*(ushort *)
                            ((int)&((HMODULE)((int)local_1c.AllocationBase + 0x14))->unused + iVar1)
                     + iVar1);
    do {
      uVar2 = puVar5[1];
      puVar6 = puVar5 + 2;
      if (puVar5[2] < *puVar5) {
        puVar6 = puVar5;
      }
      if ((uVar2 <= uVar9) && (uVar9 <= *puVar6 + uVar2)) {
        *param_4 = uVar8 + 1;
        *param_5 = uVar9 - uVar2;
        return 1;
      }
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 10;
    } while (uVar8 < uVar7);
  }
  return 0;
}

