//
//  RCTAppleHealthKit+Methods_LabTests.h
//  RCTAppleHealthKit
//
//  Created by Daniel Rufus Kaldheim on 2020-09-29.
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_LabTests)

- (void)labTests_getLatestBloodAlcoholContent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)labTests_getBloodAlcoholContentSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)labTests_saveBloodAlcoholContent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)labTests_getInsulinDeliveryOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)labTests_getDailyInsulinDeliverySamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;


@end
