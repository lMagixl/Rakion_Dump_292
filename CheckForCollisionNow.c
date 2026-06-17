
/* public: int __thiscall CMovableModelEntity::CheckForCollisionNow(long,class CEntity * *) */

int __thiscall
CMovableModelEntity::CheckForCollisionNow(CMovableModelEntity *this,long param_1,CEntity **param_2)

{
  int iVar1;
  
                    /* 0x1b4790  1169
                       ?CheckForCollisionNow@CMovableModelEntity@@QAEHJPAPAVCEntity@@@Z */
  iVar1 = FUN_36131540((CEntity *)this,*(long *)(this + 0x35c),param_2);
  return (uint)(iVar1 == 0);
}

