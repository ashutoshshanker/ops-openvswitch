/*
 * Copyright (C) 2015 Hewlett-Packard Development Company, L.P.
 * All Rights Reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *    License for the specific language governing permissions and limitations
 *    under the License.
 *
 * File:    openhalon-idl.h
 *
 * Purpose: This file contains manually generated #defines and enums to
 *          represent valid values for maps of string-string pairs in the
 *          OVSDB schema.  This is intended to be temporary until we can
 *          extend the schema & IDL generation code to produce these entries
 *          automatically.
 *
 *          For non-map columns, IDL should already automatically generate
 *          the necessary
 *          #defines in vswitch-idl.h file.
 *
 */

#ifndef OPENHALON_IDL_HEADER
#define OPENHALON_IDL_HEADER 1

/****************************** Global Definitions ******************************/

/* Default VRF name used during system bootup */
#define DEFAULT_VRF_NAME                      "vrf_default"
/* Default bridge name used during system bootup */
#define DEFAULT_BRIDGE_NAME                   "bridge_normal"

/****************************** INTERFACE TABLE ******************************/

#define OVSREC_INTERFACE_ERROR_UNINITIALIZED            "uninitialized"
#define OVSREC_INTERFACE_ERROR_ADMIN_DOWN               "admin_down"
#define OVSREC_INTERFACE_ERROR_MODULE_MISSING           "module_missing"
#define OVSREC_INTERFACE_ERROR_MODULE_UNRECOGNIZED      "module_unrecognized"
#define OVSREC_INTERFACE_ERROR_MODULE_UNSUPPORTED       "module_unsupported"
#define OVSREC_INTERFACE_ERROR_LANES_SPLIT              "lanes_split"
#define OVSREC_INTERFACE_ERROR_LANES_NOT_SPLIT          "lanes_not_split"
#define OVSREC_INTERFACE_ERROR_INVALID_MTU              "invalid_mtu"
#define OVSREC_INTERFACE_ERROR_INVALID_SPEEDS           "invalid_speeds"
#define OVSREC_INTERFACE_ERROR_AUTONEG_NOT_SUPPORTED    "autoneg_not_supported"
#define OVSREC_INTERFACE_ERROR_AUTONEG_REQUIRED         "autoneg_required"
#define OVSREC_INTERFACE_ERROR_OK                       "ok"

enum ovsrec_interface_error_e {
    INTERFACE_ERROR_UNINITIALIZED,
    INTERFACE_ERROR_ADMIN_DOWN,
    INTERFACE_ERROR_MODULE_MISSING,
    INTERFACE_ERROR_MODULE_UNRECOGNIZED,
    INTERFACE_ERROR_MODULE_UNSUPPORTED,
    INTERFACE_ERROR_LANES_SPLIT,
    INTERFACE_ERROR_LANES_NOT_SPLIT,
    INTERFACE_ERROR_INVALID_MTU,
    INTERFACE_ERROR_INVALID_SPEEDS,
    INTERFACE_ERROR_AUTONEG_NOT_SUPPORTED,
    INTERFACE_ERROR_AUTONEG_REQUIRED,
    INTERFACE_ERROR_OK
};

#define OVSREC_INTERFACE_PM_INFO_CABLE_TECHNOLOGY_ACTIVE        "active"
#define OVSREC_INTERFACE_PM_INFO_CABLE_TECHNOLOGY_PASSIVE       "passive"

enum ovsrec_interface_pm_info_cable_technology_e {
    INTERFACE_PM_INFO_CABLE_TECHNOLOGY_ACTIVE,
    INTERFACE_PM_INFO_CABLE_TECHNOLOGY_PASSIVE
};

#define INTERFACE_PM_INFO_MAP_CONNECTOR                         "connector"

#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_QSFP_CR4             "QSFP_CR4"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_QSFP_LR4             "QSFP_LR4"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_QSFP_SR4             "QSFP_SR4"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_CX               "SFP_CX"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_DAC              "SFP_DAC"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_FC               "SFP_FC"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_LR               "SFP_LR"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_LRM              "SFP_LRM"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_LX               "SFP_LX"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_RJ45             "SFP_RJ45"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_SR               "SFP_SR"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_SFP_SX               "SFP_SX"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_ABSENT               "absent"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_UNKNOWN              "unknown"

enum ovsrec_interface_pm_info_connector_e {
    INTERFACE_PM_INFO_CONNECTOR_QSFP_CR4,
    INTERFACE_PM_INFO_CONNECTOR_QSFP_LR4,
    INTERFACE_PM_INFO_CONNECTOR_QSFP_SR4,
    INTERFACE_PM_INFO_CONNECTOR_SFP_CX,
    INTERFACE_PM_INFO_CONNECTOR_SFP_DAC,
    INTERFACE_PM_INFO_CONNECTOR_SFP_FC,
    INTERFACE_PM_INFO_CONNECTOR_SFP_LR,
    INTERFACE_PM_INFO_CONNECTOR_SFP_LRM,
    INTERFACE_PM_INFO_CONNECTOR_SFP_LX,
    INTERFACE_PM_INFO_CONNECTOR_SFP_RJ45,
    INTERFACE_PM_INFO_CONNECTOR_SFP_SR,
    INTERFACE_PM_INFO_CONNECTOR_SFP_SX,
    INTERFACE_PM_INFO_CONNECTOR_ABSENT,
    INTERFACE_PM_INFO_CONNECTOR_UNKNOWN
};

#define INTERFACE_PM_INFO_MAP_CONNECTOR_STATUS                  "connector_status"

#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_STATUS_SUPPORTED     "supported"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_STATUS_UNRECOGNIZED  "unrecognized"
#define OVSREC_INTERFACE_PM_INFO_CONNECTOR_STATUS_UNSUPPORTED   "unsupported"

enum ovsrec_interface_pm_info_connector_status_e {
    INTERFACE_PM_INFO_CONNECTOR_STATUS_SUPPORTED,
    INTERFACE_PM_INFO_CONNECTOR_STATUS_UNRECOGNIZED,
    INTERFACE_PM_INFO_CONNECTOR_STATUS_UNSUPPORTED
};

#define OVSREC_INTERFACE_PM_INFO_POWER_MODE_HIGH                "high"
#define OVSREC_INTERFACE_PM_INFO_POWER_MODE_LOW                 "low"

enum ovsrec_interface_pm_info_power_mode_e {
    INTERFACE_PM_INFO_POWER_MODE_HIGH,
    INTERFACE_PM_INFO_POWER_MODE_LOW
};

#define INTERFACE_USER_CONFIG_MAP_ADMIN                         "admin"

#define OVSREC_INTERFACE_USER_CONFIG_ADMIN_DOWN                 "down"
#define OVSREC_INTERFACE_USER_CONFIG_ADMIN_UP                   "up"

enum ovsrec_interface_user_config_admin_e {
    INTERFACE_USER_CONFIG_ADMIN_DOWN,
    INTERFACE_USER_CONFIG_ADMIN_UP
};

#define INTERFACE_USER_CONFIG_MAP_AUTONEG                       "autoneg"

#define INTERFACE_USER_CONFIG_MAP_AUTONEG_OFF                   "off"
#define INTERFACE_USER_CONFIG_MAP_AUTONEG_ON                    "on"
#define INTERFACE_USER_CONFIG_MAP_AUTONEG_DEFAULT               "default"

enum ovsrec_interface_user_config_autoneg_e {
    INTERFACE_USER_CONFIG_AUTONEG_OFF,
    INTERFACE_USER_CONFIG_AUTONEG_ON,
    INTERFACE_USER_CONFIG_AUTONEG_DEFAULT
};

#define INTERFACE_USER_CONFIG_MAP_SPEEDS                        "speeds"

#define INTERFACE_USER_CONFIG_MAP_MTU                           "mtu"

#define INTERFACE_USER_CONFIG_MAP_PAUSE                         "pause"

#define INTERFACE_USER_CONFIG_MAP_PAUSE_NONE                    "none"
#define INTERFACE_USER_CONFIG_MAP_PAUSE_RX                      "rx"
#define INTERFACE_USER_CONFIG_MAP_PAUSE_TX                      "tx"
#define INTERFACE_USER_CONFIG_MAP_PAUSE_RXTX                    "rxtx"

enum ovsrec_interface_user_config_pause_e {
    INTERFACE_USER_CONFIG_PAUSE_NONE,
    INTERFACE_USER_CONFIG_PAUSE_RX,
    INTERFACE_USER_CONFIG_PAUSE_TX,
    INTERFACE_USER_CONFIG_PAUSE_RXTX
};

#define INTERFACE_USER_CONFIG_MAP_DUPLEX                        "duplex"

#define INTERFACE_USER_CONFIG_MAP_DUPLEX_HALF                   "half"
#define INTERFACE_USER_CONFIG_MAP_DUPLEX_FULL                   "full"

enum ovsrec_interface_user_config_duplex_e {
    INTERFACE_USER_CONFIG_DUPLEX_HALF,
    INTERFACE_USER_CONFIG_DUPLEX_FULL
};

#define INTERFACE_USER_CONFIG_MAP_LANE_SPLIT                    "lane_split"
#define INTERFACE_USER_CONFIG_MAP_LANE_SPLIT_NO_SPLIT           "no-split"
#define INTERFACE_USER_CONFIG_MAP_LANE_SPLIT_SPLIT              "split"

enum ovsrec_interface_user_config_lane_split_e {
    INTERFACE_USER_CONFIG_LANE_SPLIT_DEFAULT,
    INTERFACE_USER_CONFIG_LANE_SPLIT_NO_SPLIT,
    INTERFACE_USER_CONFIG_LANE_SPLIT_SPLIT
};

#define INTERFACE_HW_INTF_CONFIG_MAP_ENABLE                     "enable"

#define INTERFACE_HW_INTF_CONFIG_MAP_ENABLE_FALSE               "false"
#define INTERFACE_HW_INTF_CONFIG_MAP_ENABLE_TRUE                "true"

enum ovsrec_interface_hw_intf_config_enable_e {
    INTERFACE_HW_INTF_CONFIG_ENABLE_FALSE,
    INTERFACE_HW_INTF_CONFIG_ENABLE_TRUE
};

#define INTERFACE_HW_INTF_CONFIG_MAP_AUTONEG                    "autoneg"

#define INTERFACE_HW_INTF_CONFIG_MAP_AUTONEG_OFF                "off"
#define INTERFACE_HW_INTF_CONFIG_MAP_AUTONEG_ON                 "on"
#define INTERFACE_HW_INTF_CONFIG_MAP_AUTONEG_DEFAULT            "default"

enum ovsrec_interface_hw_intf_config_autoneg_e {
    INTERFACE_HW_INTF_CONFIG_AUTONEG_OFF,
    INTERFACE_HW_INTF_CONFIG_AUTONEG_ON,
    INTERFACE_HW_INTF_CONFIG_AUTONEG_DEFAULT
};

#define INTERFACE_HW_INTF_CONFIG_MAP_SPEEDS                     "speeds"

#define INTERFACE_HW_INTF_CONFIG_MAP_DUPLEX                     "duplex"

#define INTERFACE_HW_INTF_CONFIG_MAP_DUPLEX_HALF                "half"
#define INTERFACE_HW_INTF_CONFIG_MAP_DUPLEX_FULL                "full"

enum ovsrec_interface_hw_intf_config_duplex_e {
    INTERFACE_HW_INTF_CONFIG_DUPLEX_HALF,
    INTERFACE_HW_INTF_CONFIG_DUPLEX_FULL
};

#define INTERFACE_HW_INTF_CONFIG_MAP_PAUSE                      "pause"

#define INTERFACE_HW_INTF_CONFIG_MAP_PAUSE_NONE                 "none"
#define INTERFACE_HW_INTF_CONFIG_MAP_PAUSE_RX                   "rx"
#define INTERFACE_HW_INTF_CONFIG_MAP_PAUSE_TX                   "tx"
#define INTERFACE_HW_INTF_CONFIG_MAP_PAUSE_RXTX                 "rxtx"

enum ovsrec_interface_hw_intf_config_pause_e {
    INTERFACE_HW_INTF_CONFIG_PAUSE_NONE,
    INTERFACE_HW_INTF_CONFIG_PAUSE_RX,
    INTERFACE_HW_INTF_CONFIG_PAUSE_TX,
    INTERFACE_HW_INTF_CONFIG_PAUSE_RXTX
};

#define INTERFACE_HW_INTF_CONFIG_MAP_MTU                        "mtu"

#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE             "interface_type"

#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_UNKNOWN     "unknown"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_BACKPLANE   "backplane"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_1GBASE_SX   "1GBASE_SX"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_1GBASE_T    "1GBASE_T"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_10GBASE_CR  "10GBASE_CR"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_10GBASE_SR  "10GBASE_SR"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_10GBASE_LR  "10GBASE_LR"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_10GBASE_LRM "10GBASE_LRM"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_40GBASE_CR4 "40GBASE_CR4"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_40GBASE_SR4 "40GBASE_SR4"
#define INTERFACE_HW_INTF_CONFIG_MAP_INTERFACE_TYPE_40GBASE_LR4 "40GBASE_LR4"

enum ovsrec_interface_hw_intf_config_interface_type_e {
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_UNKNOWN,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_BACKPLANE,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_1GBASE_SX,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_1GBASE_T,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_10GBASE_CR,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_10GBASE_SR,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_10GBASE_LR,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_10GBASE_LRM,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_40GBASE_CR4,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_40GBASE_SR4,
    INTERFACE_HW_INTF_CONFIG_INTERFACE_TYPE_40GBASE_LR4
};

#define INTERFACE_HW_INTF_INFO_MAP_SWITCH_UNIT                  "switch_unit"
#define INTERFACE_HW_INTF_INFO_MAP_SWITCH_INTF_ID               "switch_intf_id"
#define INTERFACE_HW_INTF_INFO_MAP_MAC_ADDR                     "mac_addr"
#define INTERFACE_HW_INTF_INFO_MAP_MAX_SPEED                    "max_speed"
#define INTERFACE_HW_INTF_INFO_MAP_SPEEDS                       "speeds"
#define INTERFACE_HW_INTF_INFO_MAP_CONNECTOR                    "connector"
#define INTERFACE_HW_INTF_INFO_MAP_PLUGGABLE                    "pluggable"
#define INTERFACE_HW_INTF_INFO_MAP_ENET1G                       "enet1G"
#define INTERFACE_HW_INTF_INFO_MAP_ENET10G                      "enet10G"
#define INTERFACE_HW_INTF_INFO_MAP_ENET40G                      "enet40G"
#define INTERFACE_HW_INTF_INFO_MAP_SPLIT_4                      "split_4"
#define INTERFACE_HW_INTF_INFO_SPLIT_PARENT                     "split_parent"

#define INTERFACE_HW_INTF_INFO_MAP_CONNECTOR_RJ45               "RJ45"
#define INTERFACE_HW_INTF_INFO_MAP_CONNECTOR_SFP_PLUS           "SFP_PLUS"
#define INTERFACE_HW_INTF_INFO_MAP_CONNECTOR_QSFP_PLUS          "QSFP_PLUS"

enum ovsrec_interface_hw_intf_connector_e {
    INTERFACE_HW_INTF_INFO_CONNECTOR_UNKNOWN,
    INTERFACE_HW_INTF_INFO_CONNECTOR_RJ45,
    INTERFACE_HW_INTF_INFO_CONNECTOR_SFP_PLUS,
    INTERFACE_HW_INTF_INFO_CONNECTOR_QSFP_PLUS
};

#define INTERFACE_HW_INTF_INFO_MAP_PLUGGABLE_FALSE              "false"
#define INTERFACE_HW_INTF_INFO_MAP_PLUGGABLE_TRUE               "true"

#define INTERFACE_HW_INTF_INFO_MAP_SPLIT_4_FALSE                "false"
#define INTERFACE_HW_INTF_INFO_MAP_SPLIT_4_TRUE                 "true"

enum ovsrec_interface_hw_intf_info_pluggable_e {
    INTERFACE_HW_INTF_INFO_PLUGGABLE_FALSE,
    INTERFACE_HW_INTF_INFO_PLUGGABLE_TRUE
};

#define INTERFACE_HW_BOND_CONFIG_MAP_RX_ENABLED                 "rx_enabled"
#define INTERFACE_HW_BOND_CONFIG_MAP_TX_ENABLED                 "tx_enabled"

#define INTERFACE_HW_BOND_CONFIG_MAP_ENABLED_FALSE              "false"
#define INTERFACE_HW_BOND_CONFIG_MAP_ENABLED_TRUE               "true"

enum ovsrec_interface_hw_bond_config_enabled_e {
    INTERFACE_HW_BOND_CONFIG_ENABLED_FALSE,
    INTERFACE_HW_BOND_CONFIG_ENABLED_TRUE
};

/* lldp interface statistics */

/* required as per the design doc */
#define INTERFACE_STATISTICS_LLDP_TX_COUNT               "lldp_tx"
#define INTERFACE_STATISTICS_LLDP_TX_LEN_ERR             "lldp_tx_len_err"
#define INTERFACE_STATISTICS_LLDP_RX_COUNT               "lldp_rx"
#define INTERFACE_STATISTICS_LLDP_RX_ERR                 "lldp_rx_err"
#define INTERFACE_STATISTICS_LLDP_RX_DISCARDED_COUNT     "lldp_rx_discard"
#define INTERFACE_STATISTICS_LLDP_RX_TLV_DISCARD         "lldp_rx_tlv_discard"
#define INTERFACE_STATISTICS_LLDP_RX_TLV_UNKNOWN         "lldp_rx_tlv_unknown"

/* extras available */
#define INTERFACE_STATISTICS_LLDP_RX_UNRECOGNIZED_COUNT  "lldp_rx_unrecognized"
#define INTERFACE_STATISTICS_LLDP_AGEOUT_COUNT           "lldp_ageout"
#define INTERFACE_STATISTICS_LLDP_INSERT_COUNT           "lldp_insert"
#define INTERFACE_STATISTICS_LLDP_DELETE_COUNT           "lldp_delete"
#define INTERFACE_STATISTICS_LLDP_DROP_COUNT             "lldp_drop"

#define INTERFACE_OTHER_CONFIG_MAP_LLDP_ENABLE_DIR              "lldp_enable_dir"

#define INTERFACE_OTHER_CONFIG_MAP_LLDP_ENABLE_DIR_OFF          "off"
#define INTERFACE_OTHER_CONFIG_MAP_LLDP_ENABLE_DIR_RX           "rx"
#define INTERFACE_OTHER_CONFIG_MAP_LLDP_ENABLE_DIR_TX           "tx"
#define INTERFACE_OTHER_CONFIG_MAP_LLDP_ENABLE_DIR_RXTX         "rxtx"

/****************************** PORT TABLE *******************************/

#define PORT_STATUS_BOND_HW_HANDLE                              "bond_hw_handle"

/****************************** SUBSYSTEM TABLE *******************************/

#define SUBSYSTEM_OTHER_INFO_MAX_TRANSMISSION_UNIT       "max_transmission_unit"

/****************************** VLAN TABLE ******************************/

#define VLAN_HW_CONFIG_MAP_ENABLE                               "enable"

#define VLAN_HW_CONFIG_MAP_ENABLE_FALSE                         "false"
#define VLAN_HW_CONFIG_MAP_ENABLE_TRUE                          "true"

/************************* OPEN vSWITCH TABLE  ***************************/

/* LLDP related */
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_ENABLE               "lldp_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_ENABLE_DEFAULT       false

#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TX_INTERVAL          "lldp_tx_interval"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TX_INTERVAL_DEFAULT  30
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TX_INTERVAL_MIN      5
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TX_INTERVAL_MAX      32768

#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_HOLD                 "lldp_hold"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_HOLD_DEFAULT         4
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_HOLD_MIN             2
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_HOLD_MAX             10

#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_MGMT_ADDR            "lldp_mgmt_addr"

#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_SYS_NAME_ENABLE                 \
                                                   "lldp_tlv_sys_name_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_SYS_DESC_ENABLE                 \
                                                   "lldp_tlv_sys_desc_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_SYS_CAP_ENABLE                  \
                                                   "lldp_tlv_sys_cap_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_MGMT_ADDR_ENABLE                \
                                                   "lldp_tlv_mgmt_addr_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_PORT_DESC_ENABLE                \
                                                   "lldp_tlv_port_desc_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_PORT_VLAN_ID_ENABLE             \
                                            "lldp_tlv_port_vlan_id_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_PORT_PROTO_VLAN_ID_ENABLE       \
                                            "lldp_tlv_port_proto_vlan_id_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_PORT_VLAN_NAME_ENABLE           \
                                            "lldp_tlv_port_vlan_name_enable"
#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_PORT_PROTO_ID_ENABLE       \
                                            "lldp_tlv_port_proto_id_enable"

#define OPEN_VSWITCH_OTHER_CONFIG_MAP_LLDP_TLV_DEFAULT        true

/* lldp global statistics */

#define OVSDB_STATISTICS_LLDP_TABLE_INSERTS         "lldp_table_inserts"
#define OVSDB_STATISTICS_LLDP_TABLE_DELETES         "lldp_table_deletes"
#define OVSDB_STATISTICS_LLDP_TABLE_DROPS           "lldp_table_drops"
#define OVSDB_STATISTICS_LLDP_TABLE_AGEOUTS         "lldp_table_ageouts"

/* Message column global definitions for RIB table, to be used by Zebra */
#define OVSDB_RIB_MESSAGE_NEXTHOP                   0x01
#define OVSDB_RIB_MESSAGE_INDEX                     0x02
#define OVSDB_RIB_MESSAGE_DISTANCE                  0x04
#define OVSDB_RIB_MESSAGE_METRIC                    0x08

/* RIB table global protocol specific column definitions */
#define OVSDB_RIB_PROT_SPECIFIC_DATA_BGP_FLAGS      "rib_psd_bgp_flags"
#define OVSDB_RIB_PROT_SPECIFIC_DATA_BGP_AS_PATH    "rib_psd_bgp_as_path"
#define OVSDB_RIB_PROT_SPECIFIC_DATA_BGP_ORIGIN     "rib_psd_bgp_origin"
#define OVSDB_RIB_PROT_SPECIFIC_DATA_BGP_LOC_PREF   "rib_psd_bgp_loc_pref"

/****************************** VRF TABLE ******************************/

#define OVSDB_VRF_NAME_MAXLEN                       32

/****************************** NEIGHBOR TABLE ***************************/
#define OVSDB_NEIGHBOR_STATUS_DP_HIT                "dp_hit"
#define OVSDB_NEIGHBOR_STATUS_MAP_DP_HIT_DEFAULT    true

#endif /* OPENHALON_IDL_HEADER */
