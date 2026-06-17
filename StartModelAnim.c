
/* public: void __thiscall CEntity::StartModelAnim(long,unsigned long,int) */

void __thiscall CEntity::StartModelAnim(CEntity *this,long param_1,ulong param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
                    /* 0x124d50  3660  ?StartModelAnim@CEntity@@QAEXJKH@Z */
  lVar3 = param_1;
  lVar1 = CAnimObject::GetAnimsCt(*(CAnimObject **)(this + 0x7c));
  if (lVar1 <= lVar3) {
    lVar3 = 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x70))();
  if (((((iVar2 == 0) || ((param_2 & 4) == 0)) || (*(int *)(*(int *)(this + 0x7c) + 8) != lVar3)) ||
      (*(uint *)(*(int *)(this + 0x7c) + 0xc) != (param_2 & 3))) &&
     ((*(int *)(_pNetwork + 0x14) != 0 && (param_3 != 0)))) {
    iVar2 = (**(code **)(*(int *)this + 0x90))();
    if (iVar2 != 0) {
      CEntityMessage::WriteStartAnim
                ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(this + 0x1c),&param_1,&param_2);
      CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
    }
  }
  CAnimObject::PlayAnim(*(CAnimObject **)(this + 0x7c),param_1,param_2);
  return;
}

