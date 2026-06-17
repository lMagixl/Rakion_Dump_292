
/* public: void __thiscall CEntityMessage::ReadEntityCreate(unsigned long &,class CPlacement3D
   &,unsigned short &) */

void __thiscall
CEntityMessage::ReadEntityCreate
          (CEntityMessage *this,ulong *param_1,CPlacement3D *param_2,ushort *param_3)

{
  CNetworkMessage *this_00;
  CPlacement3D *pCVar1;
  
                    /* 0x101410  2956
                       ?ReadEntityCreate@CEntityMessage@@QAEXAAKAAVCPlacement3D@@AAG@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  pCVar1 = param_2;
  *param_1 = *(ulong *)(this + 0x20);
  CNetworkMessage::Read(this_00,param_2,4);
  CNetworkMessage::Read(this_00,pCVar1 + 4,4);
  CNetworkMessage::Read(this_00,pCVar1 + 8,4);
  CNetworkMessage::Read(this_00,&param_1,4);
  UnpackAngle((ulong)param_1,(Vector<float,3> *)(pCVar1 + 0xc));
  CNetworkMessage::Read(this_00,param_3,2);
  return;
}

