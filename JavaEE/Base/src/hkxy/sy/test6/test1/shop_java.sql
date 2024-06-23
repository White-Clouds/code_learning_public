/*
 Navicat Premium Dump SQL

 Source Server         : MySQL 5.7
 Source Server Type    : MySQL
 Source Server Version : 50744 (5.7.44-log)
 Source Host           : localhost:3306
 Source Schema         : shop_java

 Target Server Type    : MySQL
 Target Server Version : 50744 (5.7.44-log)
 File Encoding         : 65001

 Date: 23/06/2024 01:52:10
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for goods
-- ----------------------------
DROP TABLE IF EXISTS `goods`;
CREATE TABLE `goods`  (
  `number` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `name` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NULL,
  `madeTime` datetime NULL DEFAULT NULL,
  `price` double NULL DEFAULT NULL,
  PRIMARY KEY (`number`(255)) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_bin ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of goods
-- ----------------------------
INSERT INTO `goods` VALUES ('1', NULL, NULL, 20);
INSERT INTO `goods` VALUES ('10', NULL, NULL, 34);
INSERT INTO `goods` VALUES ('11', NULL, NULL, 56);
INSERT INTO `goods` VALUES ('12', NULL, NULL, 92);
INSERT INTO `goods` VALUES ('13', NULL, NULL, 57);
INSERT INTO `goods` VALUES ('14', NULL, NULL, 18);
INSERT INTO `goods` VALUES ('15', NULL, NULL, 40);
INSERT INTO `goods` VALUES ('2', NULL, NULL, 35);
INSERT INTO `goods` VALUES ('3', NULL, NULL, 12);
INSERT INTO `goods` VALUES ('4', NULL, NULL, 34);
INSERT INTO `goods` VALUES ('5', NULL, NULL, 76);
INSERT INTO `goods` VALUES ('6', NULL, NULL, 34);
INSERT INTO `goods` VALUES ('7', NULL, NULL, 87);
INSERT INTO `goods` VALUES ('8', NULL, NULL, 12);
INSERT INTO `goods` VALUES ('9', NULL, NULL, 56);

SET FOREIGN_KEY_CHECKS = 1;
