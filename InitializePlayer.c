
/* public: void __thiscall CPlayerEntity::InitializePlayer(long,unsigned char,int) */

void __thiscall
CPlayerEntity::InitializePlayer(CPlayerEntity *this,long param_1,uchar param_2,int param_3)

{
  EPlayerInit local_20 [8];
  long local_18;
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1b6da0  2338  ?InitializePlayer@CPlayerEntity@@QAEXJEH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EPlayerInit::EPlayerInit(local_20);
  local_14 = (uint)param_2;
  local_18 = param_1;
  local_4 = 0;
  local_10 = param_3;
  CEntity::Initialize((CEntity *)this,(CEntityEvent *)local_20,0);
  ExceptionList = local_c;
  return;
}

