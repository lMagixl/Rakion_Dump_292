
/* public: void __thiscall CObject3D::CSGSplitSectors(class CObject3D &,class CObject3D &) */

void __thiscall CObject3D::CSGSplitSectors(CObject3D *this,CObject3D *param_1,CObject3D *param_2)

{
  undefined1 local_54 [44];
  undefined4 local_28;
  undefined4 local_24;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4cd80  1113  ?CSGSplitSectors@CObject3D@@QAEXAAV1@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362118a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3604b9a0(local_20);
  local_28 = 0;
  local_24 = 0;
  local_4 = 0;
  FUN_3604caf0(local_54,this,param_1,param_2,(int *)&DAT_362a28d4,(int *)&DAT_362a28f4);
  local_4 = 0xffffffff;
  thunk_FUN_3604c3a0((undefined4 *)local_20);
  ExceptionList = local_c;
  return;
}

