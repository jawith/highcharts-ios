/**
 * (c) 2009-2017 Highsoft AS
 *
 * License: www.highcharts.com/license
 * For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
 * In case of questions, please contact sales@highsoft.com
 */

@import UIKit;

@interface HIFunction : NSObject

@property(nonatomic, readwrite) NSString *function;
/**
 * Init with function's string representation
 */
- (instancetype)initWithFunction: (NSString *) function;

-(id)getFunction;

@end

