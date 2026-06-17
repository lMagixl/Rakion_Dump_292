
int __cdecl
FUN_361f9e2e(uint param_1,uint param_2,uint *param_3,int *param_4,int *param_5,int *param_6,
            int *param_7,int param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(**(code **)(param_9 + 0x20))(*(undefined4 *)(param_9 + 0x28),0x120,4);
  if (puVar1 == (uint *)0x0) {
    return -4;
  }
  iVar2 = FUN_361f9a2a(param_3,param_1,0x101,0x3624c968,0x3624c9e8,param_6,param_8,&local_8,puVar1);
  if (iVar2 == 0) {
    if (*param_4 == 0) goto LAB_361f9f13;
    iVar2 = FUN_361f9a2a(param_3 + param_1,param_2,0,0x3624ca68,0x3624cae0,param_7,param_8,&local_8,
                         puVar1);
    if (iVar2 == 0) {
      if ((*param_5 != 0) || (param_1 < 0x102)) {
        iVar2 = 0;
        goto LAB_361f9f1f;
      }
LAB_361f9ef7:
      *(char **)(param_9 + 0x18) = s_empty_distance_tree_with_lengths_3624cbe8;
    }
    else {
      if (iVar2 == -3) {
        *(char **)(param_9 + 0x18) = s_oversubscribed_distance_tree_3624cc28;
        goto LAB_361f9f1f;
      }
      if (iVar2 != -5) {
        if (iVar2 == -4) goto LAB_361f9f1f;
        goto LAB_361f9ef7;
      }
      *(char **)(param_9 + 0x18) = s_incomplete_distance_tree_3624cc0c;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(param_9 + 0x18) = s_oversubscribed_literal_length_tr_3624cbc4;
      goto LAB_361f9f1f;
    }
    if (iVar2 == -4) goto LAB_361f9f1f;
LAB_361f9f13:
    *(char **)(param_9 + 0x18) = s_incomplete_literal_length_tree_3624cba4;
  }
  iVar2 = -3;
LAB_361f9f1f:
  (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
  return iVar2;
}

