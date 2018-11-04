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
#ifndef TCPTAHOE_H
#define TCPTAHOE_H

#include "ns3/tcp-socket-state.h"
#include "tcp-congestion-ops.h"

namespace ns3 {

class TcpTahoe : public TcpNewReno
{
public:
  /**
   * \brief Get the type ID.
   * \return the object TypeId
   */
  static TypeId GetTypeId (void);

  TcpTahoe ();

  /**
   * \brief Copy constructor.
   * \param sock object to copy.
   */
  TcpTahoe (const TcpTahoe& sock);

  ~TcpTahoe ();

  std::string GetName () const;

  virtual Ptr<TcpCongestionOps> Fork ();

};

} //namespace ns3

#endif /* TCPTAHOE_H */
