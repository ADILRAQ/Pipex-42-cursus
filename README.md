<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8"/><title>PIPEX</title><style>
/* cspell:disable-file */
/* webkit printing magic: print all background colors */
html {
	-webkit-print-color-adjust: exact;
}
* {
	box-sizing: border-box;
	-webkit-print-color-adjust: exact;
}

html,
body {
	margin: 0;
	padding: 0;
}
@media only screen {
	body {
		margin: 2em auto;
		max-width: 900px;
		color: rgb(55, 53, 47);
	}
}

body {
	line-height: 1.5;
	white-space: pre-wrap;
}

a,
a.visited {
	color: inherit;
	text-decoration: underline;
}

.pdf-relative-link-path {
	font-size: 80%;
	color: #444;
}

h1,
h2,
h3 {
	letter-spacing: -0.01em;
	line-height: 1.2;
	font-weight: 600;
	margin-bottom: 0;
}

.page-title {
	font-size: 2.5rem;
	font-weight: 700;
	margin-top: 0;
	margin-bottom: 0.75em;
}

h1 {
	font-size: 1.875rem;
	margin-top: 1.875rem;
}

h2 {
	font-size: 1.5rem;
	margin-top: 1.5rem;
}

h3 {
	font-size: 1.25rem;
	margin-top: 1.25rem;
}

.source {
	border: 1px solid #ddd;
	border-radius: 3px;
	padding: 1.5em;
	word-break: break-all;
}

.callout {
	border-radius: 3px;
	padding: 1rem;
}

figure {
	margin: 1.25em 0;
	page-break-inside: avoid;
}

figcaption {
	opacity: 0.5;
	font-size: 85%;
	margin-top: 0.5em;
}

mark {
	background-color: transparent;
}

.indented {
	padding-left: 1.5em;
}

hr {
	background: transparent;
	display: block;
	width: 100%;
	height: 1px;
	visibility: visible;
	border: none;
	border-bottom: 1px solid rgba(55, 53, 47, 0.09);
}

img {
	max-width: 100%;
}

@media only print {
	img {
		max-height: 100vh;
		object-fit: contain;
	}
}

@page {
	margin: 1in;
}

.collection-content {
	font-size: 0.875rem;
}

.column-list {
	display: flex;
	justify-content: space-between;
}

.column {
	padding: 0 1em;
}

.column:first-child {
	padding-left: 0;
}

.column:last-child {
	padding-right: 0;
}

.table_of_contents-item {
	display: block;
	font-size: 0.875rem;
	line-height: 1.3;
	padding: 0.125rem;
}

.table_of_contents-indent-1 {
	margin-left: 1.5rem;
}

.table_of_contents-indent-2 {
	margin-left: 3rem;
}

.table_of_contents-indent-3 {
	margin-left: 4.5rem;
}

.table_of_contents-link {
	text-decoration: none;
	opacity: 0.7;
	border-bottom: 1px solid rgba(55, 53, 47, 0.18);
}

table,
th,
td {
	border: 1px solid rgba(55, 53, 47, 0.09);
	border-collapse: collapse;
}

table {
	border-left: none;
	border-right: none;
}

th,
td {
	font-weight: normal;
	padding: 0.25em 0.5em;
	line-height: 1.5;
	min-height: 1.5em;
	text-align: left;
}

th {
	color: rgba(55, 53, 47, 0.6);
}

ol,
ul {
	margin: 0;
	margin-block-start: 0.6em;
	margin-block-end: 0.6em;
}

li > ol:first-child,
li > ul:first-child {
	margin-block-start: 0.6em;
}

ul > li {
	list-style: disc;
}

ul.to-do-list {
	text-indent: -1.7em;
}

ul.to-do-list > li {
	list-style: none;
}

.to-do-children-checked {
	text-decoration: line-through;
	opacity: 0.375;
}

ul.toggle > li {
	list-style: none;
}

ul {
	padding-inline-start: 1.7em;
}

ul > li {
	padding-left: 0.1em;
}

ol {
	padding-inline-start: 1.6em;
}

ol > li {
	padding-left: 0.2em;
}

.mono ol {
	padding-inline-start: 2em;
}

.mono ol > li {
	text-indent: -0.4em;
}

.toggle {
	padding-inline-start: 0em;
	list-style-type: none;
}

/* Indent toggle children */
.toggle > li > details {
	padding-left: 1.7em;
}

.toggle > li > details > summary {
	margin-left: -1.1em;
}

.selected-value {
	display: inline-block;
	padding: 0 0.5em;
	background: rgba(206, 205, 202, 0.5);
	border-radius: 3px;
	margin-right: 0.5em;
	margin-top: 0.3em;
	margin-bottom: 0.3em;
	white-space: nowrap;
}

.collection-title {
	display: inline-block;
	margin-right: 1em;
}

.simple-table {
	margin-top: 1em;
	font-size: 0.875rem;
	empty-cells: show;
}
.simple-table td {
	height: 29px;
	min-width: 120px;
}

.simple-table th {
	height: 29px;
	min-width: 120px;
}

.simple-table-header-color {
	background: rgb(247, 246, 243);
	color: black;
}
.simple-table-header {
	font-weight: 500;
}

time {
	opacity: 0.5;
}

.icon {
	display: inline-block;
	max-width: 1.2em;
	max-height: 1.2em;
	text-decoration: none;
	vertical-align: text-bottom;
	margin-right: 0.5em;
}

img.icon {
	border-radius: 3px;
}

.user-icon {
	width: 1.5em;
	height: 1.5em;
	border-radius: 100%;
	margin-right: 0.5rem;
}

.user-icon-inner {
	font-size: 0.8em;
}

.text-icon {
	border: 1px solid #000;
	text-align: center;
}

.page-cover-image {
	display: block;
	object-fit: cover;
	width: 100%;
	max-height: 30vh;
}

.page-header-icon {
	font-size: 3rem;
	margin-bottom: 1rem;
}

.page-header-icon-with-cover {
	margin-top: -0.72em;
	margin-left: 0.07em;
}

.page-header-icon img {
	border-radius: 3px;
}

.link-to-page {
	margin: 1em 0;
	padding: 0;
	border: none;
	font-weight: 500;
}

p > .user {
	opacity: 0.5;
}

td > .user,
td > time {
	white-space: nowrap;
}

input[type="checkbox"] {
	transform: scale(1.5);
	margin-right: 0.6em;
	vertical-align: middle;
}

p {
	margin-top: 0.5em;
	margin-bottom: 0.5em;
}

.image {
	border: none;
	margin: 1.5em 0;
	padding: 0;
	border-radius: 0;
	text-align: center;
}

.code,
code {
	background: rgba(135, 131, 120, 0.15);
	border-radius: 3px;
	padding: 0.2em 0.4em;
	border-radius: 3px;
	font-size: 85%;
	tab-size: 2;
}

code {
	color: #eb5757;
}

.code {
	padding: 1.5em 1em;
}

.code-wrap {
	white-space: pre-wrap;
	word-break: break-all;
}

.code > code {
	background: none;
	padding: 0;
	font-size: 100%;
	color: inherit;
}

blockquote {
	font-size: 1.25em;
	margin: 1em 0;
	padding-left: 1em;
	border-left: 3px solid rgb(55, 53, 47);
}

.bookmark {
	text-decoration: none;
	max-height: 8em;
	padding: 0;
	display: flex;
	width: 100%;
	align-items: stretch;
}

.bookmark-title {
	font-size: 0.85em;
	overflow: hidden;
	text-overflow: ellipsis;
	height: 1.75em;
	white-space: nowrap;
}

.bookmark-text {
	display: flex;
	flex-direction: column;
}

.bookmark-info {
	flex: 4 1 180px;
	padding: 12px 14px 14px;
	display: flex;
	flex-direction: column;
	justify-content: space-between;
}

.bookmark-image {
	width: 33%;
	flex: 1 1 180px;
	display: block;
	position: relative;
	object-fit: cover;
	border-radius: 1px;
}

.bookmark-description {
	color: rgba(55, 53, 47, 0.6);
	font-size: 0.75em;
	overflow: hidden;
	max-height: 4.5em;
	word-break: break-word;
}

.bookmark-href {
	font-size: 0.75em;
	margin-top: 0.25em;
}

.sans { font-family: ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol"; }
.code { font-family: "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace; }
.serif { font-family: Lyon-Text, Georgia, ui-serif, serif; }
.mono { font-family: iawriter-mono, Nitti, Menlo, Courier, monospace; }
.pdf .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK JP'; }
.pdf:lang(zh-CN) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK SC'; }
.pdf:lang(zh-TW) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK TC'; }
.pdf:lang(ko-KR) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK KR'; }
.pdf .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.pdf .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK JP'; }
.pdf:lang(zh-CN) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK SC'; }
.pdf:lang(zh-TW) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK TC'; }
.pdf:lang(ko-KR) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK KR'; }
.pdf .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.highlight-default {
	color: rgba(55, 53, 47, 1);
}
.highlight-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.highlight-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.highlight-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.highlight-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.highlight-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.highlight-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.highlight-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.highlight-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.highlight-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.highlight-gray_background {
	background: rgba(241, 241, 239, 1);
}
.highlight-brown_background {
	background: rgba(244, 238, 238, 1);
}
.highlight-orange_background {
	background: rgba(251, 236, 221, 1);
}
.highlight-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.highlight-teal_background {
	background: rgba(237, 243, 236, 1);
}
.highlight-blue_background {
	background: rgba(231, 243, 248, 1);
}
.highlight-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.highlight-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.highlight-red_background {
	background: rgba(253, 235, 236, 1);
}
.block-color-default {
	color: inherit;
	fill: inherit;
}
.block-color-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.block-color-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.block-color-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.block-color-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.block-color-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.block-color-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.block-color-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.block-color-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.block-color-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.block-color-gray_background {
	background: rgba(241, 241, 239, 1);
}
.block-color-brown_background {
	background: rgba(244, 238, 238, 1);
}
.block-color-orange_background {
	background: rgba(251, 236, 221, 1);
}
.block-color-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.block-color-teal_background {
	background: rgba(237, 243, 236, 1);
}
.block-color-blue_background {
	background: rgba(231, 243, 248, 1);
}
.block-color-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.block-color-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.block-color-red_background {
	background: rgba(253, 235, 236, 1);
}
.select-value-color-pink { background-color: rgba(245, 224, 233, 1); }
.select-value-color-purple { background-color: rgba(232, 222, 238, 1); }
.select-value-color-green { background-color: rgba(219, 237, 219, 1); }
.select-value-color-gray { background-color: rgba(227, 226, 224, 1); }
.select-value-color-opaquegray { background-color: rgba(255, 255, 255, 0.0375); }
.select-value-color-orange { background-color: rgba(250, 222, 201, 1); }
.select-value-color-brown { background-color: rgba(238, 224, 218, 1); }
.select-value-color-red { background-color: rgba(255, 226, 221, 1); }
.select-value-color-yellow { background-color: rgba(253, 236, 200, 1); }
.select-value-color-blue { background-color: rgba(211, 229, 239, 1); }

.checkbox {
	display: inline-flex;
	vertical-align: text-bottom;
	width: 16;
	height: 16;
	background-size: 16px;
	margin-left: 2px;
	margin-right: 5px;
}

.checkbox-on {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20width%3D%2216%22%20height%3D%2216%22%20fill%3D%22%2358A9D7%22%2F%3E%0A%3Cpath%20d%3D%22M6.71429%2012.2852L14%204.9995L12.7143%203.71436L6.71429%209.71378L3.28571%206.2831L2%207.57092L6.71429%2012.2852Z%22%20fill%3D%22white%22%2F%3E%0A%3C%2Fsvg%3E");
}

.checkbox-off {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20x%3D%220.75%22%20y%3D%220.75%22%20width%3D%2214.5%22%20height%3D%2214.5%22%20fill%3D%22white%22%20stroke%3D%22%2336352F%22%20stroke-width%3D%221.5%22%2F%3E%0A%3C%2Fsvg%3E");
}
	
</style></head><body><article id="bdf7dd95-5b6a-4bcd-9985-2156ca50186c" class="page sans"><header><img class="page-cover-image" src="https://www.notion.so/images/page-cover/woodcuts_sekka_3.jpg" style="object-position:center 19.999999999999996%"/><div class="page-header-icon page-header-icon-with-cover"><span class="icon">🌀</span></div><h1 class="page-title">PIPEX</h1></header><div class="page-body"><h3 id="a34be0a3-f1f5-4870-8316-e71674e8052f" class=""><span style="border-bottom:0.05em solid">SIMPLE DESCRIPTION OF THE PROJECT :</span></h3><p id="6a9df1eb-9ea8-442e-8929-e886495c7cb2" class="">
</p><p id="ea389ac2-6993-4c03-a243-0cf8eb9ba6d9" class="">This project is a simulation of piping.</p><p id="09ab13e0-4def-4cae-9954-8c80a1ad6e7e" class="">The pipeline is a sequence of one or more commands separated by one of the control operators.</p><p id="4d976b8f-5b73-484a-9c05-089462d0689e" class=""><strong>example:</strong></p><figure id="b578587f-eec2-4a72-be9b-6608d8d053a0" class="image"><a href="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_3.30.18_PM.png"><img style="width:288px" src="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_3.30.18_PM.png"/></a></figure><p id="f208f283-c89e-4e50-888a-b0de3df78c36" class="">
</p><p id="a8a985f6-a21f-4507-b612-7b18d45c07a2" class="">Which command need an <span style="border-bottom:0.05em solid">input</span>, after the command execution an <span style="border-bottom:0.05em solid">output</span> release. in this project the input will be the ‘<strong><em>infile</em></strong>’ and the output will redirected to the ‘<strong><em>outfile</em></strong>’<strong>: </strong></p><figure id="ce5beebe-a98b-4020-90c3-3fefb783b9dd" class="image"><a href="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_3.32.44_PM.png"><img style="width:480px" src="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_3.32.44_PM.png"/></a></figure><blockquote id="4a140f53-97b9-441a-bfed-fcb3dfc3d5d7" class="">The &quot;<mark class="highlight-teal"><strong>&lt;</strong></mark>&quot; symbol is used to <strong>redirect</strong> input from a file to a command.</blockquote><blockquote id="0f2b3d11-3e0a-44f3-970c-082954919ef9" class="">The &quot;<mark class="highlight-teal"><strong>&gt;</strong></mark>&quot; symbol is used to <strong>redirect</strong> output from a command to a file.</blockquote><div><blockquote id="5089db1e-363a-4b63-8a22-5fdcd759d45e" class=""><mark class="highlight-red"><strong>NB:</strong></mark><strong> </strong>the ‘outfile’ will be created after the end of execution even if it wasn’t created</blockquote></div><p id="c9e46160-b55a-4506-8192-09d5e8f88239" class="">
</p><p id="50a30a98-7470-4d25-84ff-a7bf51b4b732" class="">But in our project we’ll write that pipeline as arguments of our program:</p><figure id="3702c3a6-9a3f-471c-abce-a3ae47b7af07" class="image"><a href="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_3.30.43_PM.png"><img style="width:480px" src="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_3.30.43_PM.png"/></a></figure><p id="b93e3a68-e73a-4d9d-9fab-0fe3816d5192" class="">
</p><h3 id="58139599-f922-411e-bd71-02b0c51c2c2f" class=""><span style="border-bottom:0.05em solid">EXPLAINING THE ESSENTIAL FUNCTION OF THE PROJCT :</span></h3><p id="a3dc735f-9a7a-4187-9c7c-f8fa129f8dc8" class="">
</p><ul id="741df722-60a7-4073-9d8e-989881549e63" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>open()</strong> &amp; <strong>close() &amp; write() &amp; read()</strong>:</li></ul><p id="68553996-ded9-4499-8626-bc9750752d5c" class=""><a href="https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/?ref=gcse"><mark class="highlight-red"><em><strong>TAP HERE</strong></em></mark></a></p><p id="b93eb109-f600-43eb-8c65-7999c4b0a088" class="">
</p><ul id="91831871-2666-4961-acbf-40fdf5e431d4" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>access() </strong>:</li></ul><pre id="cd7f8901-60f7-4e3e-8ae2-1be094cc9593" class="code"><code>int access(const char *file_path, int mode);</code></pre><blockquote id="b247b948-49e9-44e1-a8fe-3eaa4bcce585" class="">checks the accessibility of the file named by the path argument for the access permissions indicated by the mode argument.</blockquote><p id="12d5e77c-fc43-4b5a-9276-0fc1996c9bf4" class=""><span style="border-bottom:0.05em solid"><strong>All the modes :</strong></span></p><p id="fa65c4e9-1d66-46ac-bd04-50a2ae64201c" class=""><strong>R_OK</strong> : for read permission</p><p id="f9c7de69-d430-4586-a78c-313a792c65f1" class=""><strong>W_OK</strong> : for write permission</p><p id="86d67e7a-054e-48fc-9992-189a9ddeddc0" class=""><mark class="highlight-yellow"><strong>X_OK</strong></mark> : for execute/search permission</p><p id="ac865947-7705-49ab-b389-0a5f05692ec9" class=""><mark class="highlight-yellow"><strong>F_OK</strong></mark> : the existence test</p><p id="8882d306-231f-48b9-bb58-adcb9c6a042b" class="">
</p><p id="c134244c-763b-4b20-aa8e-e48a91c513d7" class="">NB: we could use 2 modes to check the accessibility of a file:</p><pre id="991763a5-1dd8-4f67-b670-304d1f2c7dfb" class="code"><code>int access(const char *file_path, mode1 | mode2);</code></pre><p id="a0a5262a-63a1-4f51-9c6d-d8723df8738d" class=""><span style="border-bottom:0.05em solid"><strong>Return value:</strong></span></p><p id="07095ec7-d2bf-4ee2-a8b1-079ca83c393e" class="">0 : for successful completion</p><p id="55d6f1d8-abfb-4d2d-a23b-3149d2f0691c" class="">-1 : for error and and the global variable errno is set to indicate the error</p><p id="b026724e-98cd-4511-886a-a43dd1e7ead5" class="">
</p><ul id="de7c0466-f96d-45d7-8aed-51adea3649e7" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>dup2()</strong> :</li></ul><pre id="65950e50-b66e-40f0-b524-78cf446f8718" class="code"><code>	int dup2(old_fd, new_fd);</code></pre><blockquote id="a1ea0492-3be1-4043-aef3-e41b3d9f0815" class="">duplicating an existing file descriptor. there’s 2 processes happened:<ol type="1" id="3c9a64f2-fed7-4895-bb7f-4891feb404b2" class="numbered-list" start="1"><li>close “<strong>new_fd</strong>” (if open)</li></ol><ol type="1" id="29bfcc1b-8a5b-4633-ac6f-2ec5e2410928" class="numbered-list" start="2"><li>copies the “<strong>old_fd</strong>” to the <strong>fd[new_fd]</strong></li></ol></blockquote><p id="d52dac46-1aca-4ffc-aa98-bdb40c7d3d22" class="">EX:<div class="indented"><pre id="3dfd5c48-7b62-4220-aeef-9d128ac3187a" class="code"><code>dup2(outfile, STDOUT);</code></pre></div></p><figure id="84b51b01-829b-4e7f-aec9-ffc760c48d2e" class="image"><a href="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_4.22.27_PM.png"><img style="width:3222px" src="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_4.22.27_PM.png"/></a></figure><p id="9b50c1e3-e50e-43a8-8053-9d01438eb0f9" class=""><span style="border-bottom:0.05em solid"><strong>Return value:</strong></span></p><p id="dd0447d3-bb76-4c52-ab2b-dc993290cda5" class="">new_fd value for successful completion</p><p id="eaae0d0a-7623-492b-a847-7eb4348518d7" class="">-1 : for error and and the global variable errno is set to indicate the error</p><p id="6f0b1f9f-588a-44bd-8134-debc1b54a5e9" class="">
</p><ul id="4ac82e50-6e07-4884-b487-15b57ffe23ed" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>fork()</strong> :</li></ul><pre id="c037ba77-978e-4520-a4b5-86d8be0865fd" class="code"><code>pid_t fork(void);</code></pre><blockquote id="eeba1ae2-98bd-4048-997c-0cabec181c68" class="">This function causes creation of a new process called the <strong>child process. </strong>It&#x27;s important to note that when a child process is created using <code><strong>fork()</strong></code>, a new process is created with its own memory space, and any subsequent changes made to the variables in either the parent or child process will not affect the other process. If you want to share data between the parent and child processes, you will need to use some form of inter-process communication such as pipes.</blockquote><div id="3716c8d9-78e3-4eba-8f44-7177d2b6c8e7" class="column-list"><div id="ac44ea1b-6f14-43fc-91f4-77be4d204a36" style="width:50%" class="column"><p id="073c9327-a36f-41ba-ae48-baac7e919ca2" class=""><span style="border-bottom:0.05em solid"><strong>Return value:</strong></span><div class="indented"><ol type="1" id="e0b1ac14-c155-4371-9c2b-1a96d9185cce" class="numbered-list" start="1"><li><strong>-1</strong>: if an error occur</li></ol><ol type="1" id="8384a8c6-f3ed-4b75-870a-5079945dffcd" class="numbered-list" start="2"><li><strong>0</strong> : that means that you are in the child process</li></ol><ol type="1" id="5df106c2-3d45-4f64-afa7-4c3a29168471" class="numbered-list" start="3"><li><strong>&gt;0</strong> : that means you still at the parent process</li></ol></div></p><p id="ee679eef-0f89-425c-b166-7c2ce2df7af1" class="">
</p><figure id="c3ed094b-445c-4753-a8f5-61d95ec31504" class="image"><a href="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_6.13.09_PM.png"><img style="width:288px" src="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_6.13.09_PM.png"/></a></figure><p id="b5c47004-fef5-4811-850e-f2c874845037" class="">
</p><p id="8aded378-34c8-4449-9cb1-17f8d10ea993" class="">
</p></div><div id="5dbf3870-3823-45ed-80eb-8d597b1a8673" style="width:50%" class="column"><p id="3c0e5a5e-dc04-4a0d-b57e-a1dff7ce6b3f" class="">
</p><pre id="3f8a8676-3b9a-46f3-85d0-27c2e9eca695" class="code"><code>int pid;

pid = fork();
if (pid == -1)
{
	// ERROR
	exit(EXIT_FAILURE);
}
if (pid == 0)
{
	// CHILD PROC.
}
else
{
	// PARENT PROC.
}</code></pre></div></div><ul id="4ffbe126-8821-434b-90d6-fadb6c069007" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>pipe()</strong> :</li></ul><pre id="3c42dda3-294b-4000-ae3a-778be1089d10" class="code"><code>	int pipe(int pipefd[2]);</code></pre><blockquote id="ad1b55bb-0305-4e35-84b1-ea4eb74bd7f4" class="">This function create a tunnel that make a connection of 2 processes, it takes an array of 2 elements and create a file descriptor for read end, also create a file descriptor for write end, these 2 files used to connect the child process with the parent process.<p id="30c1d60e-a1f9-4665-b0bf-ec3f652b42f0" class="">fd[0] : read</p><p id="60a404d5-31e3-4d98-8e46-52324f358ff2" class="">fd[1]: write</p></blockquote><p id="c4de56ae-c68f-48fb-a227-eb64c9154cd8" class=""><mark class="highlight-red"><strong>NB</strong></mark>: these 2 files are not associated with files on disk, but rather with an in-memory buffer that is used for communication between the processes.</p><figure id="f93746a3-5f60-4d6e-ad5b-da9f1a6033d8" class="image"><a href="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_6.50.10_PM.png"><img style="width:1324px" src="PIPEX%20bdf7dd955b6a4bcd99852156ca50186c/Screen_Shot_2023-02-23_at_6.50.10_PM.png"/></a></figure><p id="fdf12af1-3d2d-46c3-ba4f-03935162cd3f" class="">
</p><pre id="25357f64-f96c-4d9d-80b0-15e55254c570" class="code"><code>int fd[2];

if (pipe(fd) == -1)
	// ERROR
pid = fork();
if (pid == 0)
{
	// CHILD PROC.
	// close all the unused files descriptors
	close(fd[0]);
	int x = 5;
	write(fd[1], &amp;x, sizeof(int));
	close(fd[1]);
}
else
{
	// PARENT PROC.
	// close all the unused files descriptors
	close(fd[1]);
	int y;
	read(fd[0], &amp;y, sizeof(int));
	// y will take the sent value of the child proc.
	// y = 5;
	close(fd[0]);
}</code></pre><p id="4ebfe31c-282b-4d32-85f3-a51ea9c1f590" class="">
</p><ul id="126f4371-92be-4ef4-8dbb-691c173e1ad3" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>wait() &amp; waitpid()</strong> :</li></ul><blockquote id="b3268794-ffac-47bb-ad6d-071157429ebd" class="">blocks the calling process until one of its child processes exits or a signal is received. After child process terminates, parent <em><strong>continues </strong></em>its execution after wait system call instruction.</blockquote><p id="20846f64-c783-4f16-b1d9-34c8cc9384f8" class="block-color-red"><em><strong><a href="https://www.geeksforgeeks.org/wait-system-call-c/?ref=gcse">TAP HERE</a></strong></em></p><p id="f6cb3c67-e34e-4f82-acac-9fbcd25959b0" class="">
</p><ul id="352dc695-8f49-49ea-9d74-f0aca3f3c100" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><strong>execve()</strong> :</li></ul><pre id="2c9dd830-1f4c-4c75-b7ac-86402b054836" class="code"><code>int execve(const char *path, char *const argv[], char *const envp[]);</code></pre><blockquote id="cc4017f9-edf8-4a04-bf5d-46e00824194f" class="">this function execute the <strong>cmds</strong> that came in as argument (you should split it first), if the execution was successful, it will end the process or we can say that it transforms the process into a new one. for example if we want to print after <strong>execve,</strong> nothing will be printed.</blockquote><pre id="c44a1ae0-2301-4a83-bb60-ab60e579b869" class="code"><code>	char *bin_path = &quot;/bin/ls&quot;;
	char *args[] = {bin_path, &quot;-a&quot;, &quot;-l&quot;, NULL;
	
	execve(bin_path, args, NULL);</code></pre><p id="97df546d-6c12-488b-8ae1-23d53954b691" class=""><span style="border-bottom:0.05em solid"><strong>Return value :</strong></span></p><p id="3ecd0214-845a-4413-9de0-5908cfb89dd3" class="">-1 : error occur</p><p id="389a8c95-92d8-41ba-bc8c-ba7665c95d64" class="">
</p><ul id="93bf4385-ce50-40e8-bf92-79f0d8b056b7" class="block-color-brown_background bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown_background"><strong>unlink() :</strong></mark></li></ul><pre id="7761a059-31d8-4cbe-83aa-9f915e9f9787" class="code"><code>unlink(&quot;file_path&quot;);</code></pre><blockquote id="686b6890-f3a3-4273-97a5-b8bd671de10f" class="">This function delete the file from file system (disk), but <span style="border-bottom:0.05em solid"><strong>not closing it</strong></span></blockquote><p id="422abf2c-9f65-4f2c-a042-d8d967a4444d" class="">
</p><h1 id="625f1ccf-3d80-450a-a8bd-869ed5fc9436" class="block-color-red_background">RESOURCES :</h1><ul id="79bd1092-37d2-4ca4-b15a-d4d6a9109220" class="bulleted-list"><li style="list-style-type:disc"><a href="https://www.youtube.com/watch?v=cex9XrZCU14&amp;list=PLfqABt5AS4FkW5mOn2Tn9ZZLLDwA3kZUY">Youtube playlist</a></li></ul><ul id="331e15db-f3a1-4759-ad94-c7c2e01447e6" class="bulleted-list"><li style="list-style-type:disc"><a href="https://www.youtube.com/watch?v=fOaK6oRqhEo&amp;t=445s">Youtube (pipe and dup)</a></li></ul><p id="74df3236-9237-4966-8e5c-9c1016d34c01" class="">
</p></div></article></body></html>
