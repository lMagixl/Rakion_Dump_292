
/* public: void __thiscall CEntityMessage::ReadEntityCopy(unsigned long &,unsigned long &,class
   CPlacement3D &,unsigned char) */

void __thiscall
CEntityMessage::ReadEntityCopy
          (CEntityMessage *this,ulong *param_1,ulong *param_2,CPlacement3D *param_3,uchar param_4)

{
  CNetworkMessage *this_00;
  CPlacement3D *pCVar1;
  
                    /* 0x101580  2955  ?ReadEntityCopy@CEntityMessage@@QAEXAAK0AAVCPlacement3D@@E@Z
                        */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  *param_1 = *(ulong *)(this + 0x20);
  CNetworkMessage::Read(this_00,param_2,4);
  pCVar1 = param_3;
  CNetworkMessage::Read(this_00,param_3,4);
  CNetworkMessage::Read(this_00,pCVar1 + 4,4);
  CNetworkMessage::Read(this_00,pCVar1 + 8,4);
  CNetworkMessage::Read(this_00,&param_1,4);
  UnpackAngle((ulong)param_1,(Vector<float,3> *)(pCVar1 + 0xc));
  return;
}

