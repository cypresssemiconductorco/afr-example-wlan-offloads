/*******************************************************************************
* File Name: cycfg_connectivity_wifi.c
*
* Description:
* Connectivity Wi-Fi configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc6pdl 1.6.1.4886
* personalities_2.0 2.0.0.0
* udd 1.2.0.473
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_connectivity_wifi.h"

#define CYCFG_ARP_OL_ENABLED (1u)
#define CYCFG_PF_OL_ENABLED (1u)
#define CYCFG_TKO_OL_ENABLED (1u)

static arp_ol_t arp_ol_0_ctxt;
static pf_ol_t pf_ol_0;
static tko_ol_t tko_ol_0_ctxt;
static const arp_ol_cfg_t arp_ol_cfg_0 = 
{
	.awake_enable_mask = CY_ARP_OL_FEATURE_AWAKE_ENABLE_MASK_0,
	.sleep_enable_mask = CY_ARP_OL_FEATURE_SLEEP_ENABLE_MASK_0,
	.peerage = CY_ARP_OL_PEER_AGE_0,
};
static const cy_pf_ol_cfg_t cy_pf_ol_cfg_0[] = 
{
	[0u] = {.feature = CY_PF_OL_FEAT_ETHTYPE,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 0u,
			.u = {
				.eth = {
						.eth_type = 0x806u,
						},
				},
			},
	[1u] = {.feature = CY_PF_OL_FEAT_ETHTYPE,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 1u,
			.u = {
				.eth = {
						.eth_type = 0x888Eu,
						},
				},
			},
	[2u] = {.feature = CY_PF_OL_FEAT_PORTNUM,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 2u,
			.u = {
				.pf = {
						.portnum = {.portnum = 68u,
									.range = 0u,
									.direction = PF_PN_PORT_DEST,},
						.proto = CY_PF_PROTOCOL_UDP,
					},
				},
			},
	[3u] = {.feature = CY_PF_OL_FEAT_PORTNUM,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 3u,
			.u = {
				.pf = {
						.portnum = {.portnum = 53u,
									.range = 0u,
									.direction = PF_PN_PORT_SOURCE,},
						.proto = CY_PF_PROTOCOL_UDP,
					},
				},
			},
	[4u] = {.feature = CY_PF_OL_FEAT_PORTNUM,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 4u,
			.u = {
				.pf = {
						.portnum = {.portnum = 3353u,
									.range = 0u,
									.direction = PF_PN_PORT_SOURCE,},
						.proto = CY_PF_PROTOCOL_TCP,
					},
				},
			},
	[5u] = {.feature = CY_PF_OL_FEAT_PORTNUM,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 5u,
			.u = {
				.pf = {
						.portnum = {.portnum = 3353u,
									.range = 0u,
									.direction = PF_PN_PORT_DEST,},
						.proto = CY_PF_PROTOCOL_TCP,
					},
				},
			},
	[6u] = {.feature = CY_PF_OL_FEAT_PORTNUM,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 6u,
			.u = {
				.pf = {
						.portnum = {.portnum = 3360u,
									.range = 0u,
									.direction = PF_PN_PORT_SOURCE,},
						.proto = CY_PF_PROTOCOL_TCP,
					},
				},
			},
	[7u] = {.feature = CY_PF_OL_FEAT_PORTNUM,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE,
			.id = 7u,
			.u = {
				.pf = {
						.portnum = {.portnum = 3360u,
									.range = 0u,
									.direction = PF_PN_PORT_DEST,},
						.proto = CY_PF_PROTOCOL_TCP,
					},
				},
			},
	[8u] = {.feature = CY_PF_OL_FEAT_LAST},
};
static const cy_tko_ol_cfg_t cy_tko_ol_cfg_0 = 
{
	.interval = 5,
	.retry_interval = 3,
	.retry_count = 3,
	.ports[0] = {                               
			.local_port = 3353,                               
			.remote_port = 3360,                               
			"192.168.0.108"           
			},
	.ports[1] = {                               
			.local_port = 0,                               
			.remote_port = 0,                               
			"0.0.0.0"           
			},
	.ports[2] = {                               
			.local_port = 0,                               
			.remote_port = 0,                               
			"0.0.0.0"           
			},
	.ports[3] = {                               
			.local_port = 0,                               
			.remote_port = 0,                               
			"0.0.0.0"           
			},
};
static const ol_desc_t ol_list_0[] = 
{
	[0u] = {"Pkt_Filter", &cy_pf_ol_cfg_0, &pf_ol_fns, &pf_ol_0},
	[1u] = {"ARP", &arp_ol_cfg_0, &arp_ol_fns, &arp_ol_0_ctxt},
	[2u] = {"TKO", &cy_tko_ol_cfg_0, &tko_ol_fns, &tko_ol_0_ctxt},
	[3u] = {NULL, NULL, NULL, NULL},
};

const ol_desc_t *cycfg_get_default_ol_list(void)
{
	return &ol_list_0[0];
}

