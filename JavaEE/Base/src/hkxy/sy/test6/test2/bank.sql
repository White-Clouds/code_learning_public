/*
 Navicat Premium Dump SQL

 Source Server         : MySQL 5.7
 Source Server Type    : MySQL
 Source Server Version : 50744 (5.7.44-log)
 Source Host           : localhost:3306
 Source Schema         : bank

 Target Server Type    : MySQL
 Target Server Version : 50744 (5.7.44-log)
 File Encoding         : 65001

 Date: 23/06/2024 01:55:05
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for card1
-- ----------------------------
DROP TABLE IF EXISTS `card1`;
CREATE TABLE `card1`  (
  `number` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `name` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NULL,
  `amount` double NULL DEFAULT NULL,
  PRIMARY KEY (`number`(255)) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_bin ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of card1
-- ----------------------------
INSERT INTO `card1` VALUES ('1', 'zhangsan', 300);
INSERT INTO `card1` VALUES ('2', 'xidanShop', 600);

-- ----------------------------
-- Table structure for card2
-- ----------------------------
DROP TABLE IF EXISTS `card2`;
CREATE TABLE `card2`  (
  `number` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `name` text CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NULL,
  `amount` double NULL DEFAULT NULL,
  PRIMARY KEY (`number`(255)) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_bin ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of card2
-- ----------------------------
INSERT INTO `card2` VALUES ('1', 'zhangsan', 200);
INSERT INTO `card2` VALUES ('2', 'xidanShop', 400);

SET FOREIGN_KEY_CHECKS = 1;
