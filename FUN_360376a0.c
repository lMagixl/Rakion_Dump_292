
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360376a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_18;
  _HEAPINFO local_c;
  
  iVar3 = 0;
  FUN_360374f0((char *)0x0);
  iVar4 = 0;
  local_c._pentry = (int *)0x0;
  local_18 = 0;
  iVar2 = 0;
  CPrintF(s_Walking_heap____36225ce0);
  iVar1 = _heapwalk(&local_c);
  while (iVar1 == -2) {
    if (local_c._useflag == 1) {
      iVar4 = iVar4 + local_c._size;
      local_18 = local_18 + 1;
    }
    else {
      iVar3 = iVar3 + local_c._size;
      iVar2 = iVar2 + 1;
    }
    iVar1 = _heapwalk(&local_c);
  }
  switch(iVar1) {
  case -6:
    pcVar5 = s_ERROR___bad_pointer_to_heap_36225d10;
    break;
  case -5:
    pcVar5 = s_Heap_ok__36225d04;
    break;
  case -4:
    pcVar5 = s_ERROR___bad_node_in_heap_36225d4c;
    break;
  case -3:
    pcVar5 = s_ERROR___bad_start_of_heap_36225d30;
    break;
  default:
    goto LAB_3603774c;
  case -1:
    pcVar5 = s_Heap_empty____36225cf4;
  }
  CPrintF(pcVar5);
LAB_3603774c:
  CPrintF(s_Total_used___d_bytes____2f_MB__i_36225d68,iVar4,(double)((float)iVar4 * _DAT_362265a0),
          local_18);
  CPrintF(s_Total_free___d_bytes____2f_MB__i_36225d98,iVar3,(double)((float)iVar3 * _DAT_362265a0),
          iVar2);
  return;
}

