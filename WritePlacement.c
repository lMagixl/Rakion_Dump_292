
/* public: void __thiscall CEntityMessage::WritePlacement(unsigned long &,class CPlacement3D const
   &,class CPlacement3D const &) */

void __thiscall
CEntityMessage::WritePlacement
          (CEntityMessage *this,ulong *param_1,CPlacement3D *param_2,CPlacement3D *param_3)

{
  CNetworkMessage *this_00;
  ulong local_10;
  Vector<float,3> *local_c;
  
                    /* 0x101140  3977  ?WritePlacement@CEntityMessage@@QAEXAAKABVCPlacement3D@@1@Z
                        */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 3;
  *(undefined2 *)(this + 0x1c) = 0x20;
  *(ulong *)(this + 0x20) = *param_1;
  CNetworkMessage::Write(this_00,param_2,4);
  CNetworkMessage::Write(this_00,param_2 + 4,4);
  CNetworkMessage::Write(this_00,param_2 + 8,4);
  local_c = (Vector<float,3> *)(param_2 + 0xc);
  local_10 = PackAngle(local_c);
  CNetworkMessage::Write(this_00,&local_10,4);
  CNetworkMessage::Write(this_00,param_3,4);
  CNetworkMessage::Write(this_00,param_3 + 4,4);
  CNetworkMessage::Write(this_00,param_3 + 8,4);
  local_10 = PackAngle((Vector<float,3> *)(param_3 + 0xc));
  CNetworkMessage::Write(this_00,&local_10,4);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__SETPLACEMENT__EntityID__0_36235ce8,*param_1,(double)*(float *)param_2,
            (double)*(float *)(param_2 + 4),(double)*(float *)(param_2 + 8));
    CPrintF(s_Angle___f___f___f_36235d30,(double)*(float *)local_c,
            (double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14));
  }
  return;
}

