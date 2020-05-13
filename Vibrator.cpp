/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "VibratorService"

#include <inttypes.h>

#include <log/log.h>

#include "Vibrator.h"

namespace android {
namespace hardware {
namespace vibrator {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::vibrator::V1_0::IVibrator follow.
Return<Status> Vibrator::on(uint32_t timeout_ms) {
    ALOGI("Vibrator::on %u", timeout_ms);
    return Status::OK;
}

Return<Status> Vibrator::off()  {
    ALOGI("Vibrator::off");
    return Status::OK;
}

Return<bool> Vibrator::supportsAmplitudeControl()  {
    ALOGI("Vibrator::supportsAmplitudeControl");
    return false;
}

Return<Status> Vibrator::setAmplitude(uint8_t) {
    ALOGI("Vibrator::setAmplitude");
    return Status::UNSUPPORTED_OPERATION;
}

Return<void> Vibrator::perform(Effect, EffectStrength, perform_cb _hidl_cb) {
    ALOGI("Vibrator::perform");
    _hidl_cb(Status::UNSUPPORTED_OPERATION, 0);
    return Void();
}


} // namespace implementation
}  // namespace V1_0
}  // namespace vibrator
}  // namespace hardware
}  // namespace android
