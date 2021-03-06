/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2018-2021 The IoD_Sim Authors.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef WIFI_PHY_SIMULATION_HELPER_H
#define WIFI_PHY_SIMULATION_HELPER_H

#include <ns3/object.h>
#include <ns3/wifi-helper.h>
#include <ns3/yans-wifi-helper.h>

namespace ns3 {

class WifiPhySimulationHelper : public Object
{
public:
  WifiPhySimulationHelper ();
  ~WifiPhySimulationHelper ();

  WifiHelper* GetWifiHelper ();
  YansWifiPhyHelper* GetWifiPhyHelper ();

private:
  WifiHelper m_wifi;
  YansWifiPhyHelper m_wifiPhy;
};

} // namespace ns3

#endif /* WIFI_PHY_SIMULATION_HELPER_H */
