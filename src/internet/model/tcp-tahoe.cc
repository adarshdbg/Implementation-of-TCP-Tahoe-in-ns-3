/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2018 NITK Surathkal
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
 *
 * Authors: Neel Patwa <neelpatwa94@gmail.com>
 *          Dhananjay Ugwekar <ugwekar8412@gmail.com>
 *          Mohit P. Tahiliani <tahiliani@nitk.edu.in>
 */
#include "tcp-tahoe.h"
#include "tcp-socket-base.h"
#include "ns3/log.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("TcpTahoe");

NS_OBJECT_ENSURE_REGISTERED (TcpTahoe);

TypeId TcpTahoe::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::TcpTahoe")
    .SetParent<TcpNewReno> ()
    .SetGroupName ("Internet")
    .AddConstructor<TcpTahoe> ()
  ;
  return tid;
}

TcpTahoe::TcpTahoe (void) : TcpNewReno ()
{
  NS_LOG_FUNCTION (this);
}

TcpTahoe::TcpTahoe (const TcpTahoe& sock)
  : TcpNewReno (sock)
{
  NS_LOG_FUNCTION (this);
}

TcpTahoe::~TcpTahoe (void)
{
}


std::string
TcpTahoe::GetName () const
{
  return "TcpTahoe";
}


Ptr<TcpCongestionOps>
TcpTahoe::Fork ()
{
  return CopyObject<TcpTahoe> (this);
}

} // namespace ns3

