/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t enuma_info = {
    .hwc_value = "",
    .sku_value = "",

    .mod_device = "enuma",
    .name = "enuma",
    .brand = "Xiaomi",
    .device = "enuma",
    .marketname = "Xiaomi Pad 5 Pro 5G",
    .model = "M2105K81C",
    .cert = "M2105K81C",
    .build_fingerprint = "Xiaomi/enuma/enuma:13/RKQ1.211001.001/V816.0.3.0.TKZCNXM:user/release-keys",
    .hwsku = "enuma",
    .flavor = "enuma-user",
    .nfc = false,
};

void vendor_load_properties() {
    set_variant_props(enuma_info);
    set_dalvik_heap();
}
