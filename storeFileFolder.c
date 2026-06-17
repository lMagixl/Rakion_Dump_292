
/* private: unsigned int __thiscall Xenesis::xFileManager::storeFileFolder(struct
   Xenesis::xFileManager::xFolder &,unsigned char *)const  */

uint __thiscall
Xenesis::xFileManager::storeFileFolder(xFileManager *this,xFolder *param_1,uchar *param_2)

{
  uchar *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_28;
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
                    /* 0x1a5650  4424
                       ?storeFileFolder@xFileManager@Xenesis@@ABEIAAUxFolder@12@PAE@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b95e;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_3601df80(&local_28,(_String_base *)&DAT_362435e8,4);
  local_4 = 0;
  FUN_361a6ee0(param_1,&local_28,&param_2);
  pvVar2 = local_24;
  local_4 = 0xffffffff;
  if (0xf < local_10) {
    FUN_36018c30();
    operator_delete(pvVar2);
  }
  uVar4 = (int)param_2 - (int)puVar1;
  if ((uVar4 & 7) != 0) {
    uVar5 = 8 - (uVar4 & 7);
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_2[0] = '\0';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      param_2 = param_2 + 4;
    }
    for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = '\0';
      param_2 = param_2 + 1;
    }
    uVar4 = uVar4 + uVar5;
  }
  ExceptionList = local_c;
  return uVar4;
}

