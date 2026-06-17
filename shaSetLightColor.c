
/* void __cdecl shaSetLightColor(unsigned long,unsigned long) */

void __cdecl shaSetLightColor(ulong param_1,ulong param_2)

{
  undefined4 local_4;
  
                    /* 0x8e460  4373  ?shaSetLightColor@@YAXKK@Z */
  FUN_360605c0(&local_4,param_2);
  DAT_362c9944 = local_4;
  FUN_360605c0(&local_4,param_1);
  DAT_362c9948 = local_4;
  return;
}

