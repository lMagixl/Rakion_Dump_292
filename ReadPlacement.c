
/* public: void __thiscall CEntityMessage::ReadPlacement(unsigned long &,class CPlacement3D &,class
   CPlacement3D &) */

void __thiscall
CEntityMessage::ReadPlacement
          (CEntityMessage *this,ulong *param_1,CPlacement3D *param_2,CPlacement3D *param_3)

{
  CNetworkMessage *this_00;
  CPlacement3D *pCVar1;
  
                    /* 0x101260  2974  ?ReadPlacement@CEntityMessage@@QAEXAAKAAVCPlacement3D@@1@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  pCVar1 = param_2;
  *param_1 = *(ulong *)(this + 0x20);
  CNetworkMessage::Read(this_00,param_2,4);
  CNetworkMessage::Read(this_00,pCVar1 + 4,4);
  CNetworkMessage::Read(this_00,pCVar1 + 8,4);
  CNetworkMessage::Read(this_00,&param_1,4);
  UnpackAngle((ulong)param_1,(Vector<float,3> *)(pCVar1 + 0xc));
  pCVar1 = param_3;
  CNetworkMessage::Read(this_00,param_3,4);
  CNetworkMessage::Read(this_00,pCVar1 + 4,4);
  CNetworkMessage::Read(this_00,pCVar1 + 8,4);
  CNetworkMessage::Read(this_00,&param_1,4);
  UnpackAngle((ulong)param_1,(Vector<float,3> *)(pCVar1 + 0xc));
  return;
}

