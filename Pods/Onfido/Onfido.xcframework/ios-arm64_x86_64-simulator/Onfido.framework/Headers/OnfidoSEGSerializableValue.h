//
//  SEGSerializableValue.h
//  Analytics
//
//  Created by Tony Xiao on 11/29/16.
//  Copyright © 2016 Segment. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 Acceptable dictionary values are
 NSString (String);
 NSNumber (Int, Float, Bool);
 NSNull
 NSDate => ISO8601 String
 NSURL => absoluteURL String
 NSArray of the above
 NSDictionary of the above
 */
#define ONFIDO_SERIALIZABLE_DICT NSDictionary<NSString *, id> *

/*
 Acceptable dictionary values are
 NSString (String);
 NSNumber (Int, Float, Bool);
 NSNull
 NSArray of the above
 NSDictionary of the above
 */
#define ONFIDO_JSON_DICT NSDictionary<NSString *, id> *
